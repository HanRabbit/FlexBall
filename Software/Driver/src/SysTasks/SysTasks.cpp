/**
* FreeRTOS 任务调度
 * 1. 串口接收 OpenMV 的小球坐标数据并进行 PID 控制
 * 2. ESP-NOW 与 Atom 的双向数据通信
 * 3. RGB LED 的指示灯状态显示
 */

#include "SysTasks.h"
#include "CamSerial/CamSerial.h"
#include "LED/LED.h"

SysTask sysTask;

static ball_data_t ball_data = {114, 514};

/**
 * @brief SysTask 系统任务调度初始化
 */
SysTask::SysTask() {
    vTaskDelay(1000);

    xTaskCreatePinnedToCore(taskMain,
        "taskMain",
        TASK_MAIN_STACK_DEPTH,
        nullptr,
        TASK_MAIN_PRIORITY,
        &taskServoControlHandle,
        ARDUINO_RUNNING_CORE);

    xTaskCreatePinnedToCore(taskLedStatus,
        "taskLedStatus",
        TASK_LED_STATUS_STACK_DEPTH,
        &led.status,
        TASK_LED_STATUS_PRIORITY,
        &taskLedStatusHandle,
        ARDUINO_RUNNING_CORE);

     // xTaskCreatePinnedToCore(taskEspCommunication,
     //    "taskEspCommunication",
     //    TASK_ESP_COMMUNICATION_STACK_DEPTH,
     //    nullptr,
     //    TASK_ESP_COMMUNICATION_PRIORITY,
     //    nullptr,
     //    0);
}

/**
 * @brief 串口接收 OpenMV 的小球坐标数据并进行 PID 控制
 * @param parameter 当前任务参数
 */
[[noreturn]] void taskMain(void *parameter) {
    vTaskDelay(3000);
    led.status = LED::ready;

    for (;;) {
        camSerial.readPackedData();
    }
}

/**
 * @brief LED 指示灯显示当前状态
 * @param parameter 当前任务参数
 */
[[noreturn]] void taskLedStatus(void *parameter) {
    for (;;) {
        /* 读取当前 LED 状态 */
        auto *pStatus = (LED::led_status_t *) parameter;
        led.statusShow(*pStatus);
    }
}

