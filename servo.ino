#include <Servo.h>
Servo servomotor;
int pinoBotao = 11;
void setup()
{
  servomotor.attach(8);
  pinMode(pinoBotao, INPUT);
}
void loop()
{
  int estadoBotao = digitalRead(pinoBotao);
  if(estadoBotao == HIGH){
    for(int i=0; i <= 180; i ++){
  		servomotor.write(i);
        delay(20);
      }
     delay(3000);   
    for(int i=180; i >= 0; i --){
  		servomotor.write(i);
        delay(20);
      }
  }
}