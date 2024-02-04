This is experimental code to allow the sbitx sound output device to be set by providing the device name as a parameter when starting sbitx from the command line.

For example:
$ ./sbitx
  will start the sbitx program with the normal WM8731 as the audio output device.

$ ./sbitx plughw:0,0
  will accomplish the same thing - the WM8731 will be used as the audio output device (although this time the command line parameter specified the device.)

After plugging in an inexpensive USB sound out / microphone in dongle, which created a hw:4,0 device:

$ ./sbitx plughw:4,0
  will send the filtered and demodulated receiver audio to the left headphone.

This is a work in progress. The Audio can be glitchy, but it does demonstrate some capability and is a start in understanding how to support other audio devices.
It may be possible to get a bluetooth audio device to work - but so far I haven't had much luck.
