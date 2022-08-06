#include "stm32f1xx.h"
#include "clk_user.h"
#include "timer_pwm.h"

int main(void) {
	clk_user();
	TIM4_init();

	while (1) {
		TIM4->CCR4 = 500;
	}

}

