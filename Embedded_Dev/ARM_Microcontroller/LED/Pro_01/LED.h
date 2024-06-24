// LED.h

#ifndef LED_H
#define LED_H

#include "stm32f4xx_hal.h" 

class LED {
public:
    // constructor 
    LED(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);

    //turn the LED on
    void on();

    // turn the LED off
    void off();

    //the LED state
    void toggle();

private:
    GPIO_TypeDef* GPIOx_;
    uint16_t GPIO_Pin_;
};

#endif 