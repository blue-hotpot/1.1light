#ifndef _BSP_LED_H
#define _BSP_LED_H

#include "gd32f4xx.h"
#include "systick.h"
#define BSP_RCU_BASE (unsigned int)0x40023800U
#define BSP_RCU_AHB1EN *(unsigned int*)(0x40023800U + 0x30U)

#define BSP_GPIOD_BASE (unsigned int)0x40020C00U
#define BSP_GPIOD_CTL *(unsigned int*)(0x40020C00U + 0x00U)
#define BSP_GPIOD_PUD *(unsigned int *)(0x40020C00U + 0x0CU)
#define BSP_GPIOD_OMODE *(unsigned int *)(0x40020C00U + 0x04U)
#define BSP_GPIOD_OSPD *(unsigned int *)(0x40020C00U + 0x08U)
#define BSP_GPIOD_OCTL *(unsigned int *)(0x40020C00U + 0x14U)
#define BSP_GPIOD_BOP *(unsigned int *)(0x40020C00U + 0x18U)
#define BSP_GPIOD_TG *(unsigned int *)(0x40020C00U + 0x2cU)

#define BSP_GPIOA_BASE (unsigned int)0x40020000U
#define BSP_GPIOA_CTL *(unsigned int*)(0x40020000U + 0x00U)
#define BSP_GPIOA_PUD *(unsigned int *)(0x40020000U + 0x0CU)
#define BSP_GPIOA_OMODE *(unsigned int *)(0x40020000U + 0x04U)
#define BSP_GPIOA_OSPD *(unsigned int *)(0x40020000U + 0x08U)
#define BSP_GPIOA_OCTL *(unsigned int *)(0x40020000U + 0x14U)
#define BSP_GPIOA_BOP *(unsigned int *)(0x40020000U + 0x18U)
#define BSP_GPIOA_TG *(unsigned int *)(0x40020000U + 0x2cU)

#define BSP_GPIOG_BASE (unsigned int)0x40021800U
#define BSP_GPIOG_CTL *(unsigned int*)(0x40021800U + 0x00U)
#define BSP_GPIOG_PUD *(unsigned int *)(0x40021800U + 0x0CU)
#define BSP_GPIOG_OMODE *(unsigned int *)(0x40021800U + 0x04U)
#define BSP_GPIOG_OSPD *(unsigned int *)(0x40021800U + 0x08U)
#define BSP_GPIOG_OCTL *(unsigned int *)(0x40021800U + 0x14U)
#define BSP_GPIOG_BOP *(unsigned int *)(0x40021800U + 0x18U)
#define BSP_GPIOG_TG *(unsigned int *)(0x40021800U + 0x2cU)
	
#define LED1_PORT GPIOE
#define LED1_RCU RCU_GPIOE
#define LED1_PIN GPIO_PIN_3

#define LED2_PORT GPIOD
#define LED2_RCU RCU_GPIOD
#define LED2_PIN GPIO_PIN_7

#define LED3_PORT GPIOG
#define LED3_RCU RCU_GPIOG
#define LED3_PIN GPIO_PIN_3

#define LED4_PORT GPIOA
#define LED4_RCU RCU_GPIOA
#define LED4_PIN GPIO_PIN_5

static int32_t LED_PORT[4]={LED1_PORT,LED2_PORT,LED3_PORT,LED4_PORT};
static int32_t LED_RCU[4]={LED1_RCU,LED2_RCU,LED3_RCU,LED4_RCU};
static int32_t LED_PIN[4]={LED1_PIN,LED2_PIN,LED3_PIN,LED4_PIN};

typedef enum
{
	led1=0,
	led2=1,
	led3=2,
	led4=3,
}led;

void led_config(led lednumber);




#endif

//void led1_light(void);
//void led2_light(void);
//void led3_light(void);
//void led4_light(void);


