/*
 * Platform_Types.h
 *
 *  Created on: Jan 10, 2024
 *      Author: Rakshith
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

	#ifndef TRUE
		#define TRUE (1 != 0)
	#endif

	#ifndef FALSE
		#define FALSE (0 != 0)
	#endif

/*---------Standard Integer Data types-----------*/

	/*Range : -128 to 127  */
	/*	 	: 0x80 to Ox7F  */
	typedef signed char sint8;

	/*Range : 0    to 255  */
	/*	 	: 0x00 to OxFF  */
	typedef unsigned char uint8;

	/*Range : -32768 to 32767  */
	/*	 	: 0x8000 to Ox7FFF  */
	typedef signed short sint16;

	/*Range : 0      to 65535  */
	/*	 	: 0x0000 to OxFFFF  */
	typedef unsigned short uint16;

	/*Range : -2147483648 to 2147483647  */
	/*	 	:  0x80000000 to Ox7FFFFFFF  */
	typedef signed long sint32;

	/*Range : 0          to 4294967295  */
	/*	 	: 0x00000000 to OxFFFFFFFF  */
	typedef unsigned long uint32;

	/*Range : -9223372036854775808 to 9223372036854775807  */
	/*	 	:  0x8000000000000000  to Ox7FFFFFFFFFFFFFFF  */
	typedef signed long long sint64;

	/*Range : 0                  to 18446744073709551615  */
	/*	 	: 0x0000000000000000 to OxFFFFFFFFFFFFFFFF  */
	typedef unsigned long long uint64;

/*---------Standard Integer Data types-----------*/



/*---------Standard Float Data types-----------*/

	typedef float float32;

	typedef double float64;
/*---------Standard Float Data types-----------*/




#endif /* PLATFORM_TYPES_H_ */
