#include <REG52.H>

sbit LED_PIN = P0.0;
void delay_ms(unsigned int t){
    unsigned int x,y;
    for (x = 0;x<t;x++){
        for(y=0;y<123;y++);
    }
}
 
 void main (){
     while (1)
     {
         LED_PIN = ! LED_PIN;
         delay_ms(500);
     }
     
 }//bai vi du
 