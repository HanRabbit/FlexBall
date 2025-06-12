#include "ESP_Communication.h"

/* ATOM 物联网终端 MAC 地址 */
const uint8_t atomPocketMAC[] = {0x34, 0x85, 0x18, 0x5E, 0x5C, 0xD0};
esp_now_peer_info_t atomPeerInfo;

ESP_Communication espCommunication;

/* 数据发送回调函数 */
void onDataSent(const uint8_t *macAddr, esp_now_send_status_t status) {
    Serial.printf("Send STATUS: %s", status == ESP_NOW_SEND_SUCCESS ? "OK" : "FAILED");
}

void ESP_Communication::init() {
    WiFi.mode(WIFI_STA);
    Serial.println(WiFi.macAddress());

    if (esp_now_init() != ESP_OK) {
        Serial.println("ESP NOW INIT FAILED");
        return;
    }

    /* 注册ESP NOW 通信协议的地址 */
    esp_now_register_send_cb(onDataSent);

    /* 设置通信终端的通道为默认，且非加密 */
    atomPeerInfo.channel = 0;
    atomPeerInfo.encrypt = false;

    esp_now_add_peer(&atomPeerInfo);
}

esp_err_t ESP_Communication::sendBallData(ball_data_t data) {
    esp_err_t result = esp_now_send(atomPocketMAC, (uint8_t *) &data, sizeof(data));
    Serial.println(result == ESP_OK ? "SUCCESS!" : "FAILED");
    return result;
}