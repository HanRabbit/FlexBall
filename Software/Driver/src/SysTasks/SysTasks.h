#ifndef SYS_TASKS_H
#define SYS_TASKS_H

#include <FreeRTOS.h>
#include <Servo/Servo.h>
#include <PID_Controller/PID_Controller.h>

/* Main Task */
#define TASK_MAIN_STACK_DEPTH 2048
#define TASK_MAIN_PRIORITY 5

/* LED Status Task */
#define TASK_LED_STATUS_STACK_DEPTH 2048
#define TASK_LED_STATUS_PRIORITY 2

/* ESP Communication Task */
#define TASK_ESP_COMMUNICATION_STACK_DEPTH 8192
#define TASK_ESP_COMMUNICATION_PRIORITY 3

/* PID 算法舵机控制主任务 */
[[noreturn]] void taskMain(void *parameter);

/* ESP-NOW 的双向串口通信 */
[[noreturn]] void taskEspCommunication(void *parameter);

/* RGB LED 指示灯状态显示 */
[[noreturn]] void taskLedStatus(void *parameter);

class SysTask {
public:
    /* 任务句柄配置 */
    TaskHandle_t taskServoControlHandle {};
    TaskHandle_t taskReceiveUartDataHandle {};
    TaskHandle_t taskEspNowCommunicationHandle {};
    TaskHandle_t taskLedStatusHandle {};

    SysTask();      /* FreeRTOS 操作系统初始化 */
};

extern SysTask sysTask;

#endif //SYS_TASKS_H
