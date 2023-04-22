/**
 ******************************************************************************
 * @file    main.h
 * Author: 	Xavier Halgand
 * @author
 * @version
 * @date
 * @brief   Header for main.c module
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#define _POSIX_SOURCE
#define _POSIX_C_SOURCE 200809L

/* Includes ------------------------------------------------------------------*/
#include <alsa/asoundlib.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <sched.h>
#include <errno.h>
#include <getopt.h>
#include <alloca.h>

/* Local includes --------------------------------------------------------------*/
#include "MIDI_application.h"
#include "soundGen.h"
#include "delay.h"
#include "chorusFD.h"
#include "random.h"
#include "constants.h"
#include "drifter.h"
#include "resonantFilter.h"
#include "adsr.h"
#include "sequencer.h"

/* Exported functions --------------------------------------------------------- */
void Dekrispator_exit(uint8_t val);
/*-------------------------------------------------------*/
#endif /* __MAIN_H */


