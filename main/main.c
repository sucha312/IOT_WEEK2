#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freetos/task.h>
#include "driver/gpio.h"
#include "LED.h"

#define LED_PIN_1

void app_main(void)
{
	LED_init();
    while (true) {
       LED_on(LED_PIN_1);
    }
}
