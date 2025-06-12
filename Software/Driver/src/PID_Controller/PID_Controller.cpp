#include "PID_Controller.h"

#include <HWCDC.h>

/**
 * @brief PID 控制器构造函数
 * @param pidKp 比例系数
 * @param pidKi 积分系数
 * @param pidKd 微分系数
 * @param pidDt 控制周期（ ms ）
 */
PID_Controller::PID_Controller(const float pidKp, const float pidKi, const float pidKd, const float pidDt) {
    kp = pidKp;
    ki = pidKi;
    kd = pidKd;
    dt = pidDt;
}

void PID_Controller::setTarget(float pidTarget) {
    this->target = pidTarget;
}

void PID_Controller::setKp(float pidKp) {
    this->kp = pidKp;
}

void PID_Controller::setKi(float pidKi) {
    this->ki = pidKi;
}

void PID_Controller::setKd(float pidKd) {
    this->kd = pidKd;
}

float PID_Controller::compute(float current_value) {
    float error = target - current_value;       /* 误差计算 */
    integral += error * dt;                     /* 积分计算 */
    derivative = (error - prev_error) / dt;     /* 微分计算 */
    output = kp * error + ki * integral + kd * derivative;  /* PID 输出计算 */

    /* 限制输出值 */
    // output = _limit(output, min_output, max_output);

    prev_error = error;
    prev_value = current_value;

    return output;
}