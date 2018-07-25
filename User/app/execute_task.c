#include "execute_task.h"
#include "can_device.h"
#include "uart_device.h"
#include "cmsis_os.h"
#include "calibrate.h"
#include "pid.h"
#include "sys.h"



//uint8_t test_key_value;
extern uint8_t test_servo;
int i =10;
//uint16_t servo_angle = 1000;



void execute_task(const void* argu)
{
   //测试电机初始化	
   uart_init(USER_UART1,9600,WORD_LEN_8B,STOP_BITS_1,PARITY_NONE);
test_moto_init();
   while(1)
  {
   //测试电机控制程序
		//write_uart(USER_UART1,"hello world\n",13);
    test_moto_control();
    osDelay(5);
  }
}
