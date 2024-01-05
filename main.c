/*
  The script blinks the on-board LED on the Raspberry Pi Pico with a
  delay for infinite times.
 */

#include "pico/stdlib.h"

int main(void) {
  #ifndef PICO_DEFAULT_LED_PIN
  #warning blink require a board with regular LED
  #else
    /*
      The PICO_DEFAULT_LED_PIN constant is the default on-board LED
      PIN.
      The PICO_DEFAULT_LED_PIN constant's value is 25.
      Instead of the PICO_DEFAULT_LED_PIN variable, you can also use
      25.
     */
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    /* Initialize the on-board LED pin and clear any output value. */
    gpio_init(LED_PIN);
    /*
      Set on-board LED pin direction to output.
      The GPIO_OUT constant, whose value is 1.
     */
    gpio_set_dir(LED_PIN, GPIO_OUT);
    /* Loop to perform the operation infinitely many times. */
    while(true) {
      /* Set the on-board LED to high (1 indicates True or high). */
      gpio_put(LED_PIN, 1);
      /* Sleep for 500 milliseconds, or 0.5 seconds. */
      sleep_ms(500);
      /* Set the on-board LED to low (0 indicates False, low, or clear
	 the GPIO). */
      gpio_put(LED_PIN, 0);
      /* Sleep for 250 milliseconds, or 0.25 seconds. */
      sleep_ms(250);
    }
  #endif
}
