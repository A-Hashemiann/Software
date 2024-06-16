#ifndef LED_H
#define LED_H

#include "stm32f4xx_hal.h" // replace with your specific HAL header

class LED {
public:
    // constructor to initialize the LED with a GPIO port and pin
    LED(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
    
    // method to turn on the LED
    void On();
    
    // method to turn off the LED
    void Off();
    
    // method to toggle the LED state
    void Toggle();
    
private:
    GPIO_TypeDef* m_GPIOx;
    uint16_t m_GPIO_Pin;
};

#endif 
