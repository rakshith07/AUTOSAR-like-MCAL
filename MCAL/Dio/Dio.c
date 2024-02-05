/*
 * Dio.c
 *
 *  Created on: Jan 23, 2024
 *      Author: Rakshith
 */

#include "Dio.h"


typedef GPIO_ts* pGPIO_ts;
const pGPIO_ts GPIO_ports[] = { GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF };

#define DIO_GET_PORT_FROM_CHANNEL_ID(_channelId) (_channelId / 16)
#define DIO_GET_BIT_FROM_CHANNEL_ID(_channelId) (1 << (_channelId % 16))


typedef struct {
    const Dio_ConfigType* Config;
    uint8 InitRun;
}Dio_GlobalType;

static Dio_GlobalType DioGlobal = {.InitRun = FALSE, .Config = NULL};

#define IS_VALID_CHANNEL(_x)
#define IS_VALID_PORT(_x)
#define IS_VALID_CHANNELGROUP(_x)
#define VALIDATE(_exp,_api,_err )
#define VALIDATE_RV(_exp,_api,_err,_rv )


Dio_PortLevelType Dio_ReadPort(Dio_PortType portId)
{
    Dio_PortLevelType level = 0;
    VALIDATE_RV( DioGlobal.InitRun, DIO_READPORT_ID, DIO_E_UNINIT, (Dio_PortLevelType)0 );
    VALIDATE_RV( IS_VALID_PORT(portId), DIO_READPORT_ID, DIO_E_PARAM_INVALID_PORT_ID, (Dio_PortLevelType)0 );

    level = GPIO_ReadInputData(GPIO_ports[portId]);

    return level;
}

void Dio_WritePort(Dio_PortType portId, Dio_PortLevelType level)
{
    VALIDATE( DioGlobal.InitRun, DIO_READCHANNELGROUP_ID, DIO_E_UNINIT );
    VALIDATE( IS_VALID_PORT(portId), DIO_WRITEPORT_ID, DIO_E_PARAM_INVALID_PORT_ID );

    GPIO_Write(GPIO_ports[portId], level);

    return;
}

Dio_LevelType Dio_ReadChannel(Dio_ChannelType channelId)
{
    Dio_LevelType level;
    VALIDATE_RV( DioGlobal.InitRun, DIO_READCHANNEL_ID, DIO_E_UNINIT, (Dio_LevelType)0 );
    VALIDATE_RV( IS_VALID_CHANNEL(channelId), DIO_READCHANNEL_ID, DIO_E_PARAM_INVALID_CHANNEL_ID, (Dio_LevelType)0 );

    Dio_PortLevelType portVal = Dio_ReadPort(DIO_GET_PORT_FROM_CHANNEL_ID(channelId));
    Dio_PortLevelType bit = DIO_GET_BIT_FROM_CHANNEL_ID(channelId);

    if ((portVal & bit) != STD_LOW){
        level = STD_HIGH;
    } else{
        level = STD_LOW;
    }

    return (level);
}

void Dio_WriteChannel(Dio_ChannelType channelId, Dio_LevelType level)
{
    VALIDATE( DioGlobal.InitRun, DIO_WRITECHANNEL_ID, DIO_E_UNINIT );
    VALIDATE( IS_VALID_CHANNEL(channelId), DIO_WRITECHANNEL_ID, DIO_E_PARAM_INVALID_CHANNEL_ID);

    Dio_PortLevelType portVal = GPIO_ReadOutputData(GPIO_ports[DIO_GET_PORT_FROM_CHANNEL_ID(channelId)]);
    Dio_PortLevelType bit = DIO_GET_BIT_FROM_CHANNEL_ID(channelId);

    if(level == STD_HIGH){
        portVal |= bit;
    }else{
        portVal &= ~bit;
    }

    Dio_WritePort(DIO_GET_PORT_FROM_CHANNEL_ID(channelId), portVal);

    return;
}

void Dio_GetVersionInfo(Std_VersionInfoType* versioninfo)
{
    VALIDATE( DioGlobal.InitRun, DIO_GETVERSIONINFO_ID, DIO_E_UNINIT );
    VALIDATE( !(versioninfo == NULL), DIO_GETVERSIONINFO_ID, DIO_E_PARAM_POINTER );

    versioninfo->vendorID = DIO_VENDOR_ID;
    versioninfo->moduleID = DIO_MODULE_ID;
    versioninfo->sw_major_version = DIO_SW_MAJOR_VERSION;
    versioninfo->sw_minor_version = DIO_SW_MINOR_VERSION;
    versioninfo->sw_patch_version = DIO_SW_PATCH_VERSION;

}
