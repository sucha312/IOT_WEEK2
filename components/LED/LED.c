#include <stdio.h>
#include "LED.h"
#include "driver/gpio"

void LED_init(void)
{

}

void LED_set(int pin, int state){
	gpio_set_diection(pin,GPIO_MODE_OUTPUT);
	gpio_set_level(pin,state);
}
void LED_on(int pin){
	gpio_set_direction(pin,GPIO_MODE_OUTPUT);
	int state = gpio_get_level(pin);
	gpio_set_level(pin,state);
}
