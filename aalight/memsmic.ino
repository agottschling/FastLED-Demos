
// Leave the line above blank
void memsmic() {

  int thisdelay = 4;

  int n;
  for (int i = 0; i<NUM_LEDS; i++) {
    n = analogRead(MIC_PIN);                        // Raw reading from mic
    n = abs(n - 512 - DC_OFFSET);                   // Center on zero
    leds[i] = CHSV((n*2 % 255), 255, (n*2)% 255);

//  FastLED.delay(thisdelay*2.5);
  delay_at_max_brightness_for_power(thisdelay*2.5);
//  delay(thisdelay);

    show_at_max_brightness_for_power();
  }
} // memsmic()

