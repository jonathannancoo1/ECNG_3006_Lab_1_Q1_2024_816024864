#include <stdio.h>
#include <stdlib.h>
#include <string.h>    
#include <unistd.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "esp_sleep.h"
#include "driver/gpio.h"
#include "driver/hw_timer.h"
#include "driver/uart.h"
#include "freertos/semphr.h"
#include "calc.h"

void app_main(int argc, char *argv[])
{
	printf("'10 + 2 = %d'\n", add(10, 2));
	printf("'10 - 2 = %d'\n", sub(10, 2));
	printf("'10 * 2 = %d'\n", mul(10, 2));
	printf("'10 / 2 = %d'\n", my_div(10, 2));
	printf("'10 %% 2 = %d'\n", mod(10, 2));
	printf("'10 power two = %d'\n", power_two(10));
	printf("'10 power three = %d'\n", power(10, 3));
	posnum(5);
	printf("POSNUM works\n");
	negnum(-5);
	printf("NEGNUM works\n");
	unsigned int test= magnitude(-5);
	printf("the number is %u\n",test);
	int arr[10];
	size_t size = sizeof(arr) / sizeof(arr[0]);
	fill_single_digit_positive_number(arr, size);
}
