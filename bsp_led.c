#include "bsp_led.h"


//void led1_light(void)
//{
//	rcu_periph_clock_enable(RCU_GPIOE);
//	
//	gpio_mode_set(GPIOE,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,GPIO_PIN_3);
//	
//	gpio_output_options_set(GPIOE,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,GPIO_PIN_3);
//	
//	gpio_bit_set(GPIOE,GPIO_PIN_3);
//	//gpio_bit_reset(GPIOE,GPIO_PIN_3);
//	//gpio_bit_write(GPIOE,GPIO_PIN_3,RESET);
//	//gpio_port_write(GPIOE,0x0008);//第3位引脚的数值为8
//}

//void led2_light(void)
//{
//	//开启GPIOD的端口时钟
//	BSP_RCU_AHB1EN |= (0x01 << 3);
//	//配置GPIOD的模式
//	BSP_GPIOD_CTL &= (0xfd << 14);
//	BSP_GPIOD_CTL |= (0x01 << 14);
//	
//	BSP_GPIOD_PUD &= (0xfc << 14);
//	//配置GPIOD的输出
//	BSP_GPIOD_OMODE &= (0xfe << 7);
//	
//	BSP_GPIOD_OSPD &=(0xfd << 14);
//	BSP_GPIOD_OSPD |=(0x01 << 14);//led初始化
//	
//	BSP_GPIOD_OCTL |= 0x01 << 7;
//	//BSP_GPIOD_BOP |= 0x01 << 23;//reset
//	//BSP_GPIOD_BOP |= 0x01 << 7;//set
//}
//void led3_light(void)
//{
//	//开启GPIOG的端口时钟
//	BSP_RCU_AHB1EN |= (0x01 << 6);
//	//配置GPIOG的模式
//	BSP_GPIOG_CTL &= (0xfd << 6);
//	BSP_GPIOG_CTL |= (0x01 << 6);
//	
//	BSP_GPIOG_PUD &= (0xfc << 6);
//	//配置GPIOG的输出
//	BSP_GPIOG_OMODE &= (0xfe << 3);
//	
//	BSP_GPIOG_OSPD &=(0xfd << 6);
//	BSP_GPIOG_OSPD |=(0x01 << 6);//led初始化
//	
//	BSP_GPIOG_OCTL |= 0x01 << 3;
//	
//}

//void led4_light(void)//pa5
//{
//	rcu_periph_clock_enable(RCU_GPIOA);
//	
//	gpio_mode_set(GPIOA,GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,GPIO_PIN_5);
//	
//	gpio_output_options_set(GPIOA,GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,GPIO_PIN_5);
//	
//	gpio_bit_set(GPIOA,GPIO_PIN_5);
//}


//lednumber:led1,led2,led3,led4


void led_config(led lednumber)
{
	rcu_periph_clock_enable(LED_RCU[lednumber]);
	gpio_mode_set(LED_PORT[lednumber],GPIO_MODE_OUTPUT,GPIO_PUPD_NONE,LED_PIN[lednumber]);
	gpio_output_options_set(LED_PORT[lednumber],GPIO_OTYPE_PP,GPIO_OSPEED_50MHZ,LED_PIN[lednumber]);
}




