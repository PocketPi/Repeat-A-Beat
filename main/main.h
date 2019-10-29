#ifndef MAIN_H_
#define MAIN_H_

enum {
    LED_OFF = 0,
    LED_BLINK,
    LED_SOLID,
    LED_BLINK_ERROR
};

/**
 * @brief     set the state of the indicator led
 */
void set_led_state(uint32_t state);

/**
 * @brief     set the freq of the indicator led
 */
void set_led_freq(uint32_t freq);

#endif /* MAIN_H_*/
