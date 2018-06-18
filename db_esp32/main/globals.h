/*
 *   This file is part of DroneBridge: https://github.com/seeul8er/DroneBridge
 *
 *   Copyright 2018 Wolfgang Christl
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */

#ifndef DB_ESP32_GLOBALS_H
#define DB_ESP32_GLOBALS_H

// can be set by user
extern char DEST_IP[15];
extern volatile int SERIAL_PROTOCOL;  // 1,2=MSP, 3,4,5=MAVLink/transparent
extern int DB_UART_PIN_TX;
extern int DB_UART_PIN_RX;
extern int DB_UART_BAUD_RATE;
extern int TRANSPARENT_BUF_SIZE;

// system internally
extern volatile bool client_connected;

#endif //DB_ESP32_GLOBALS_H