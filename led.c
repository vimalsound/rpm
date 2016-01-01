#include<pic16f877a.h>
#use delay(clock = 1000000)
#use rs232(baud = 9600, xmit = pin_c6, rcv = pin_c7)



void main()
{
   SET_TRIS_B(0x00);
   
   
   
   while(1)
   {
     output_high(pin_b0);
    delay_ms(300);
    output_low(pin_b0);
    delay_ms(3000);
    }
    }
