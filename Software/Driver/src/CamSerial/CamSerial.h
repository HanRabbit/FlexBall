#ifndef SERIAL_H
#define SERIAL_H

#include "CamSerial/BallData/BallData.h"

#define DEFAULT_SERIAL_BAUD 115200

#define PKT_HEADER 0x5A
#define PKT_FOOTER 0xA5
#define PKT_TYPE_DATA 0x01
#define PKT_SIZE 12

#define CAM_SERIAL Serial1

class CamSerial {
public:
    CamSerial();
    ball_data_t readPackedData();
};

extern CamSerial camSerial;

#endif //SERIAL_H
