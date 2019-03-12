#pragma once
#include "stm32f7xx_hal.h"
#include <stdint.h>


class STM32Hardware {
public:
  
    /** any initialization code necessary */
    void init(); 

    /** read a byte from the connection . */
    int read();

    /** write data to the send-buffer.
     *  Automatically flushes if the buffer is full */
    void write(uint8_t* data, int length);
   
    /** Send data from the send-buffer to the connection */
    void flush();

    /** returns milliseconds since start of program */
    unsigned long time();

};
