#pragma once
#include "stm32f7xx_hal.h"
#include <stdint.h>


class STM32Hardware {
public:
  
    /** Any initialization code necessary */
    void init(); 

    /** Read a byte from the communication link */
    int read();

    /** Write data to the send-buffer.
     *  @note This method does not send anything, it merely adds the data to a buffer.
     *        Data will be send when flush() is called. */
    void write(uint8_t* data, int length);
   
    /** Send data from the send-buffer. */
    void flush();

    /** returns milliseconds since start of program */
    unsigned long time();

};
