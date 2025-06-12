#ifndef SERVO_H
#define SERVO_H

#include "ESP32Servo.h"
#include "CamSerial/BallData/BallData.h"

/* 配置两个舵机的 PWM 输出引脚 */
#define SERVO_X_PIN 17
#define SERVO_Y_PIN 16

#define SERVO_X_MIN 60
#define SERVO_X_MAX 110

#define SERVO_Y_MIN 70
#define SERVO_Y_MAX 130

#define SERVO_CONTROL_PERIOD 10

extern Servo servo_x, servo_y;

enum servo_t {
    x_servo,
    y_servo
};

typedef struct {
    uint16_t x;
    uint16_t y;
} platform_pos_t;

class ServoController {
public:
    /* 小球目标位置 */
    platform_pos_t targetPosition = {};

    ServoController();

    /* 舵机角度设定 */
    void setAngle(servo_t which_servo, uint8_t angle);

    /* 舵机角度回读 */
    uint16_t getAngle(servo_t which_servo);

    /* 舵机测试 */
    void servoTest();

    /* Flex-Ball 小球位置目标设定 */
    void setTargetPosition(platform_pos_t pos);

    /* Flex-Ball 小球位置闭环控制 */
    void servoAngleControl(ball_data_t ballData);
};

extern ServoController servoController;

#endif //SERVO_H