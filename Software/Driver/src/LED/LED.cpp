#include "LED.h"

LED led;
CRGB crgb_led[1];

LED::LED() {
    FastLED.addLeds<NEOPIXEL, LED_DATA_PIN>(crgb_led, 1);
}

void LED::statusShow(led_status_t status) {
    FastLED.setBrightness(255);

    switch (status) {
        case ready:
            crgb_led[0] = CRGB::Green;
            FastLED.show();
            vTaskDelay(30);
            crgb_led[0] = CRGB::Black;
            FastLED.show();
            vTaskDelay(2000);
            break;
        case error:
            crgb_led[0] = CRGB::Red;
            FastLED.show();
            vTaskDelay(30);
            crgb_led[0] = CRGB::Black;
            FastLED.show();
            vTaskDelay(2000);
            break;
        case running:
            crgb_led[0] = CRGB::Blue;
            FastLED.show();
            vTaskDelay(30);
            crgb_led[0] = CRGB::Black;
            FastLED.show();
            vTaskDelay(1000);
            break;
        case checking:
            crgb_led[0] = CRGB::Green;
            FastLED.show();
            vTaskDelay(500);
            crgb_led[0] = CRGB::Red;
            FastLED.show();
            vTaskDelay(500);
            break;
        default: ;
    }
}

