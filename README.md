This is experimental code to allow the sbitx sound output device to be set by providing the device name as a parameter when starting sbitx from the command line. The device name parameter is optional - if no device name is provided, then the WM8731 will be used as the audio output device.

For example:
$ ./sbitx
  will start the sbitx program with the normal WM8731 as the audio output device.

$ ./sbitx plughw:0,0
  will accomplish the same thing - the WM8731 will be used as the audio output device (although this time the command line parameter specifies the device.)

After plugging in an inexpensive USB sound out / microphone in dongle, which created a hw:4,0 device:

$ ./sbitx plughw:4,0
  will send the filtered and demodulated receiver audio to the left headphone.

This is a work in progress. The Audio can be glitchy, but it does demonstrate some capability and is a start in understanding how to support other audio devices.
It may be possible to get a bluetooth audio device to work - but so far I haven't had much luck.

The sbitx volume control may not work with devices other than the default WM8731 - use alsamixer or alsamixergui to adjust the volume of the audio device if necessary.

NOTE: There are some other minor bug fixes and changes that are part of this package. One of the changes is to move the wisdom files to /home/pi/sbitx/data
Because of this change the first time the program is run it will need about a minute to generate the wisdom files, if they're not in the data directory already.
