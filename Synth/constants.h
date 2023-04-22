/**
 ******************************************************************************
 * File Name          : constants.h
 * Author			  : Xavier Halgand
 * Date               :
 * Description        :
 ******************************************************************************
 */
#ifndef __CONSTANTS_H__
#define __CONSTANTS_H__

/*--------------------------------------------------------------------------------------*/

#define SAMPLERATE              48000
#define VOL                     100 // initial output DAC volume ( <= 127 )
#define ATT_MAX					50.0	/* maximum attenuation for volume, in dB */
#define MIDI_CONTROLLER_ID		20		/* for ALSA */
#define MIDI_CONTROLLER_PORT	0		/* for ALSA */
#define DEKRISPATOR_ID			128		/* for ALSA */
#define DEKRISPATOR_PORT		0		/* for ALSA */

/*--------------------------------------------------------------------------------------*/

#define Ts						(1.f/SAMPLERATE)  // sample period
#define _2PI                    6.283185307f
#define _PI                    	3.14159265f

#define MAXVOL                  127 // maximal output DAC volume

//#define PARAM_MAX				21 // maximal parameter index, starting at 0

#define MIDI_MAX				127.f 	// floating max value
#define MIDI_MAXi				127		// integer max value
#define MIDI_MID_i				64		// integer mid value
#define LOG10					2.30258509299

#define _CCM_

#if defined   (__GNUC__)        /* GNU Compiler */
    #define __ALIGN    __attribute__ ((aligned (4)))
#endif /* __GNUC__ */

/************************************************************************************/
#endif  /*__CONSTANTS_H__ */
