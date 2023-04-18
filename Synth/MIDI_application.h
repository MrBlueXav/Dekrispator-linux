/*
 * MIDI_application.h
 *
 *  First created on: 6 dec. 2014
 *      Author: Xavier Halgand
 */

#ifndef MIDI_APPLICATION_H_
#define MIDI_APPLICATION_H_

/* Includes ------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdbool.h>

#include "constants.h"
#include "random.h"
#include "drifter.h"
#include "notesTables.h"
#include "drifter.h"
#include "soundGen.h"

/*------------------------------------------------------------------------------*/

extern int8_t currentNote;
extern int8_t velocity;

/* Exported functions ------------------------------------------------------- */
void midi_open(void);
snd_seq_event_t *midi_read(void);
void midi_process(const snd_seq_event_t *ev);
void MagicFX(uint8_t val);
void MagicPatch(uint8_t val);
void Reset_notes_On(void);
void MIDI_Application(void);

/*------------------------------------------------------------------------------*/
#endif /* MIDI_APPLICATION_H_ */
