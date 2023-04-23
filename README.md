Dekrispator (v3) for linux
===========

This is Dekrispator synthesizer for linux/ALSA (console mode, no graphic interface).

Tested on x86-64 and Raspberry Pi 2.

- - - -

**Usage**

```
$ cd Release/
$ make dekrispator-linux (to compile only)
$ ./dekrispator-linux
```

When powering up the board, the synth starts in "demo mode". The synth works on its own, sounds are perpetually changing. 

To control Dekrispator's parameters you have to connect first a USB MIDI controller (like Korg NanoKontrol...) to your PC and then start Dekrispator. 

Verify the client number (id) of your controller, it's displayed when Dekrispator starts or you can check with "aconnect -i" in a terminal.

 If it's not 20 change to the right number in file constants.h (#define MIDI_CONTROLLER_ID		...) and recompile. It's 20 for my PC but 24 for my Raspberry Pi. That should be improved later.

You can also play notes if you connect a keyboard and turn off the sequencer.

CC68 (= 127) : reset synth with basic sound and sequencer running.

CC67 (= 127) : toggle demo mode.

CC69 (= 127) : toggles sequencer run/stop

CC75 (= 127) : ends program.



Ready-to-use files are in Ressources folder.

The MIDI mapping of the synth controls are in MIDI_mapping.ods file. I used the factory settings of Korg NanoKontrol V1 (some momentary/toggle buttons modified). 


- - - -

**Dekrispator features** :

 * monophonic
 * all digital !
 * sound generators :
   * oscillators with very low aliased analog waveforms with superb minBLEP oscillators (thanks to Sean Bolton)
   * 4 operators FM generator
   * multisaw (several saws with individual "drifters")
   * 10 sine additive generator
   * noise
 * 32 step random sequencer
 * several scales to choose from
 * 2 parallel filters LP/BP/HP with LFOs
 * Effects :
   * vibrato
   * tremolo
   * drive/distortion
   * echo
   * chorus/flanger
   * phaser
 * random sound and FX patch generator


- - - -
Special thanks : Sean Bolton, Perry R. Cook and Gary P. Scavone, Gabriel Rivas, Ross Bencina, Tomas Scherrer, Julian Schmidt, GaryA, Thorsten Klose, erwincoumans, ST

- - - - 

**Building from source :**

Go to Release folder and type in your terminal "make clean" then "make dekrispator-linux". 
- - - 
**See also the port to Windows, Linux, Mac and Raspberry Pi  by erwincoumans :**

 https://github.com/erwincoumans/StkDekrispatorSynthesizer
 
 
