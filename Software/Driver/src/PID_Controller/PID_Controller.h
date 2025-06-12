#ifndef DRIVER_PID_CONTROLLER_H
#define DRIVER_PID_CONTROLLER_H

#define _limit(x, min, max) ((x) < (min) ? (min) : ((x) > (max) ? (max) : (x)))

class PID_Controller {
    float kp, ki, kd;     /* PID 参数 */
    float dt;             /* 采样时间 */
    float target{};       /* 目标值 */
    float prev_error{};   /* 上一次误差 */
    float integral{};     /* 积分值 */
    float derivative{};   /* 微分值 */
    float prev_value{};   /* 上一次输出值 */
    float output{};       /* 输出值 */
    float min_output = 0;   /* 最小输出值 */
    float max_output = 180;   /* 最大输出值 */
public:
    PID_Controller(float pidKp, float pidKi, float pidKd, float pidDt);
    void setTarget(float target);
    void setKp(float kp);
    void setKi(float ki);
    void setKd(float kd);
    float compute(float current_value);
};

#endif //DRIVER_PID_CONTROLLER_H
