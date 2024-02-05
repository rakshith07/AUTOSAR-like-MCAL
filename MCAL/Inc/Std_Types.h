/*
 * Std_Types.h
 *
 *  Created on: Jan 10, 2024
 *      Author: Rakshith Guruswamy
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

#include "Platform_Types.h"

#ifndef 	NULL
#define	NULL	0
#endif

typedef uint8 StatusType;
typedef uint8 Std_ReturnType;

#define E_OK 0x00u
#define E_NOK 0x01u

#define STD_ON 0x01u
#define STD_OFF 0x00u

#define STD_HIGH 0x01u
#define STD_LOW 0x00u

#define STD_ACTIVE 0x01u
#define STD_IDLE 0x00u

typedef struct {
    uint16 vendorID;
    uint16 moduleID;

    uint8 sw_major_version;    /* Vendor numbers */
    uint8 sw_minor_version;    /* Vendor numbers */
    uint8 sw_patch_version;    /* Vendor numbers */
} Std_VersionInfoType;


#define STD_GET_VERSION (_major,_minor,_patch) (_major * 10000 + _minor * 100 + _patch)

#endif /* STD_TYPES_H_ */
