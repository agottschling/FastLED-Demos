FastLED-Demos
=============

By: Andrew Tuline

Email: atuline@gmail.com

Date: September, 2014


Here's some demo sequences for FastLED 2.1 (and above) for a single strand of RGB LED's, such as WS2811 or WS2812B. Some I wrote,
others I've found on the Internet and modified. Each should compile and run separately and have been tested on an Arduino UNO and
Nano 3.0, but not the Teensy.

If I haven't properly attributed some code, please let me know and I'd be happy to do so.

The template for the sequences is called aatemplate.



In addition to several standalone demos, I have included aalight and aainfra, which support multiple display sequences, keyboard, IR remote and pushbutton control.

aalight.ino - Runs on an Arduino connected to an LED strip. Compile aalight.ino, and it will include the other .ino files in the directory.

aainfra.ino - Runs on a 2nd Arduino connected to an IR sensor. Compile aainfra.ino and connect Tx of the 2nd Arduino to Rx of the first one.

See aalight.ino for more information on how to use this. Also see aalight.png for a breadboard layout.




In the future, I hope to restructure and include sequences that:

* are sound responsive with just a microphone
* are sound responsive with msgeq7 spectrum analyzer chip
* I may even investigate classes down the road


The awesome FastLED Library is available from: http://fastled.io/

Download FastLED 2.1 from: https://github.com/FastLED/FastLED/tree/FastLED2.1




An LED links page on my web site:       http://www.tuline.com/dru/content/led-products-libraries-and-effects

My Youtube channel is at:               https://www.youtube.com/user/atuline/videos

My future LED site will be at:          http://www.twinkleds.com  (already registered with an 'under construction' page)

My Github account is at:                https://github.com/atuline

My Pastebins are at:                    http://pastebin.com/u/atuline

My personal web site is at:             http://www.tuline.com



Disclaimer: I haven't gone through the code with a fine tooth comb, so it's not yet optimized with non-blocking delays and in many
cases, the most efficient declarations of variables. Am working on it slowly.

These were updated to support the (now working) FastLED.delay, however it doesn't seem to work correctly in all cases, so I have reverted to delay() for those.