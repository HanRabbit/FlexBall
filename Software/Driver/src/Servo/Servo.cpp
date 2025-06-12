#include "Servo.h"
#include "PID_Controller/PID_Controller.h"

Servo servo_x, servo_y;
ServoController servoController;
PID_Controller pidController1(0.002, 0.000001, 0.6, 40);
PID_Controller pidController2(0.002, 0.000001, 0.6, 40);

/**
 * @brief 舵机控制器初始化
 */
ServoController::ServoController() {
    /* 启动定时器 */
    ESP32PWM::allocateTimer(0);
    ESP32PWM::allocateTimer(1);

    /* 设置舵机 PWM 通信频率 */
    servo_x.setPeriodHertz(50);
    servo_y.setPeriodHertz(50);

    /* 配置舵机 PWM 输出端口 */
    servo_x.attach(SERVO_X_PIN);
    servo_y.attach(SERVO_Y_PIN);

    servoController.setAngle(x_servo, (SERVO_X_MAX + SERVO_X_MIN) / 2);
    servoController.setAngle(y_servo, (SERVO_Y_MAX + SERVO_Y_MIN) / 2);
}

/**
 * @brief 舵机控制器设定角度
 * @param which_servo 选择要控制的舵机 ( x_servo, y_servo )
 * @param angle 目标角度
 */
void ServoController::setAngle(servo_t which_servo, uint8_t angle) {
    if (which_servo == x_servo) {
        angle = _limit(angle, SERVO_X_MIN, SERVO_X_MAX);
        servo_x.write(angle);
    }
    else if (which_servo == y_servo) {
        angle = _limit(angle, SERVO_Y_MIN, SERVO_Y_MAX);
        servo_y.write(angle);
    }
}

/**
 * @brief 舵机控制器角度回读
 * @param which_servo 选择要控制的舵机 ( x_servo, y_servo )
 * @return 舵机当前角度
 */
uint16_t ServoController::getAngle(servo_t which_servo) {
    if (which_servo == x_servo)
        return servo_x.read();
    else if (which_servo == y_servo)
        return servo_y.read();
    else
        return 0;
}

/**
 * @brief 舵机测试
 */
void ServoController::servoTest() {
    for (float i = 0; i < 2 * PI; i += .01) {
        servoController.setAngle(x_servo, sin(i) * (SERVO_X_MAX - SERVO_X_MIN) / 2 + (SERVO_X_MIN + SERVO_X_MAX) / 2);
        servoController.setAngle(y_servo, cos(i) * (SERVO_Y_MAX - SERVO_Y_MIN) / 2 + (SERVO_Y_MIN + SERVO_Y_MAX) / 2);
        vTaskDelay(5);
    }
}

/**
 * @brief 小球位置目标设定
 * @param pos 小球坐标数据
 */
void ServoController::setTargetPosition(platform_pos_t pos) {
    targetPosition.x = pos.x;
    targetPosition.y = pos.y;
    pidController1.setTarget(pos.x);
    pidController2.setTarget(pos.y);
}

/**
 * @brief 舵机位置闭环控制
 * @param ballData 小球坐标数据
 */
void ServoController::servoAngleControl(ball_data_t ballData) {
    /* 计算舵机角度 */
    uint8_t angleX = pidController1.compute(ballData.ball_x) * (SERVO_X_MAX - SERVO_X_MIN) / 2 + (SERVO_X_MIN + SERVO_X_MAX) / 2;
    uint8_t angleY = pidController2.compute(ballData.ball_y) * (SERVO_Y_MAX - SERVO_Y_MIN) / 2 + (SERVO_Y_MIN + SERVO_Y_MAX) / 2;

    setAngle(x_servo, angleX);
    setAngle(y_servo, angleY);
}