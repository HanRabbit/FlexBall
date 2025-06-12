#ifndef DRIVER_ESP_COMMUNICATION_H
#define DRIVER_ESP_COMMUNICATION_H

#include <WiFi.h>
#include <esp_now.h>
#include "CamSerial/BallData/BallData.h"

class ESP_Communication {
public:
    void init();

    esp_err_t sendBallData(ball_data_t data);
};

extern ESP_Communication espCommunication;

#endif //DRIVER_ESP_COMMUNICATION_H
