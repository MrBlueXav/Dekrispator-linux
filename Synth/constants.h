/**
 ******************************************************************************
 * File Name          : CONSTANTS.h
 * Author			  : Xavier Halgand
 * Date               :
 * Description        :
 ******************************************************************************
 */
#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

/*--------------------------------------------------------------------------------------*/

#define SAMPLERATE              48000
#define Ts						(1.f/SAMPLERATE)  // sample period
#define _2PI                    6.283185307f
#define _PI                    	3.14159265f

#define VOL                     100 // initial output DAC volume
#define MAXVOL                  127 // maximal output DAC volume

#define PARAM_MAX				21 // maximal parameter index, starting at 0

#define MIDI_MAX				127.f 	// floating max value
#define MIDI_MAXi				127		// integer max value
#define MIDI_MID_i				64		// integer mid value
#define LOG10					2.30258509299
#define ATT_MAX					45.0	/* maximum attenuation for volume, in dB */

#define _CCM_
//#define _CCM_					__attribute__((section(".ccmram"))) // for use of CCM RAM (64kB)

#if defined   (__GNUC__)        /* GNU Compiler */
    #define __ALIGN    __attribute__ ((aligned (4)))
#endif /* __GNUC__ */

/************************************************************************************/
#endif  /*__CONSTANTS_H__ */
