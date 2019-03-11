#pragma once
#include "stm32f7xx_hal.h"
#include <stdint.h>


class STM32Hardware {
  public:
  
    /** any initialization code necessary */
    void init(); 

    /** read a byte from the connection . */
    int read();

  /** write data to the connection to ROS */
  void write(uint8_t* data, int length);

  /** returns milliseconds since start of program */
  unsigned long time();

};
