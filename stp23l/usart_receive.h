#ifndef __USART_RECEIVE_H
#define __USART_RECEIVE_H

#include "decode.h"

extern uint8_t Rxbuffer_1[195];
extern uint8_t Rxbuffer_2[195];

extern LidarPointTypedef Lidar1;
extern LidarPointTypedef Lidar2;

extern uint16_t UartFlag[6];
extern uint8_t usart1_rx[1];
extern uint8_t usart2_rx[1];
#endif // __USART_RECEIVE_H