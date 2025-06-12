#include "CamSerial.h"
#include <Servo/Servo.h>

CamSerial camSerial;

CamSerial::CamSerial() {
    CAM_SERIAL.begin(DEFAULT_SERIAL_BAUD, SERIAL_8N1, 46, 18);
}

/**
 * @brief 读取从 OpenMV 串口发送过来的数据包并解析
 * @return 小球坐标数据结构体
 */
ball_data_t CamSerial::readPackedData() {
    uint8_t buffer[10];
    ball_data_t data = {0, 0};
    CAM_SERIAL.readBytes(buffer, 10);
    if (buffer[0] == 0xFA && buffer[9] == 0xFB) {
        uint16_t x = (buffer[1]) | buffer[2] << 8;
        uint16_t y = (buffer[3]) | buffer[4] << 8;
        servoController.servoAngleControl({x, y});
        data = {x, y};
    }
    servoController.setTargetPosition({300, 250});
    vTaskDelay(40);
    return data;
}
