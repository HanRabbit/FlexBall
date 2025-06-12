#ifndef LED_H
#define LED_H

#include <FastLED.h>

#define LED_DATA_PIN 48
#define BEEP_PIN 5

#define BEEP_CHANNEL 8

class LED {
public:
    enum led_status_t {
        ready,
        running,
        error,
        checking
    };

    /* 设置 LED 灯初始值为自检中 */
    led_status_t status = checking;

    LED();
    void statusShow(led_status_t status);
};

extern LED led;

#endif //LED_H
