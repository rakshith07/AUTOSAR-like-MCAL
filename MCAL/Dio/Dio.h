/*
 * Dio.h
 *
 *  Created on: Jan 10, 2024
 *      Author: Rakshith Guruswamy
 */

#ifndef DIO_H_
#define DIO_H_

#include "Platform_Types.h"
#include "Std_Types.h"
#include "HW_Dependent_header.h"

#define DIO_MODULE_ID                       0u
#define DIO_VENDOR_ID                       0u

#define DIO_SW_MAJOR_VERSION                1u
#define DIO_SW_MINOR_VERSION                2u
#define DIO_SW_PATCH_VERSION                3u

#define DIO_AR_RELEASE_MAJOR_VERSION        4u
#define DIO_AR_RELEASE_MINOR_VERSION        1u
#define DIO_AR_RELEASE_PATCH_VERSION        2u


// API Service ID's
#define DIO_READCHANNEL_ID                  0x00u
#define DIO_WRITECHANNEL_ID                 0x01u
#define DIO_READPORT_ID                     0x02u
#define DIO_WRITEPORT_ID                    0x03u
#define DIO_READCHANNELGROUP_ID             0x04u
#define DIO_WRITECHANNELGROUP_ID            0x05u
#define DIO_INIT_ID                         0x10u
#define DIO_GETVERSIONINFO_ID               0x12u
#define DIO_GLOBAL_ID                       0xFFu

#define DIO_E_PARAM_INVALID_CHANNEL_ID      10u
#define DIO_E_PARAM_INVALID_PORT_ID         20u
#define DIO_E_PARAM_INVALID_GROUP_ID        31u
#define DIO_E_PARAM_CONFIG                  0x10u
#define DIO_E_PARAM_POINTER                 0x20u

typedef uint32 			Dio_ChannelType;
typedef uint8 			Dio_LevelType;
typedef uint32 			Dio_PortType;
typedef uint16 			Dio_PortLevelType;

typedef struct
{
  Dio_PortType port;
  uint8 offset;
  uint16 mask;
} Dio_ChannelGroupType;

typedef struct
{
  const Dio_ChannelType* ChannelConfig;
  const Dio_ChannelGroupType* GroupConfig;
  const Dio_PortType *PortConfig;
}Dio_ConfigType;

extern const Dio_ConfigType DioConfigData;

Dio_LevelType Dio_ReadChannel (   Dio_ChannelType ChannelId );
Dio_PortLevelType Dio_ReadPort ( Dio_PortType PortId );
void Dio_WriteChannel ( Dio_ChannelType ChannelId, Dio_LevelType Level );
void Dio_WritePort ( Dio_PortType PortId, Dio_PortLevelType Level );
void Dio_GetVersionInfo ( Std_VersionInfoType* VersionInfo );

//Dio_PortLevelType Dio_ReadChannelGroup ( const Dio_ChannelGroupType* ChannelGroupIdPtr );
//void Dio_WriteChannelGroup ( const Dio_ChannelGroupType* ChannelGroupIdPtr, Dio_PortLevelType Level );
//Dio_LevelType Dio_FlipChannel ( Dio_ChannelType ChannelId );
//void Dio_MaskedWritePort ( Dio_PortType PortId, Dio_PortLevelType Level, Dio_PortLevelType Mask );
//void Dio_Init(const Dio_ConfigType* ConfigPtr);


//#include "Dio_Cfg.h"







#endif /* DIO_H_ */
