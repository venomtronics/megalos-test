#include <Servo.h>
Servo s;
void setup()
{
  Serial.begin(9600);
  s.attach(10);
  
}
void loop()
{
  char c=Serial.read();
  Serial.println(c);
  if(c=='1')
  {
    Serial.println("ok");
    s.write(90);
    delay(100);
    s.write(0);
    delay(1000);
    s.write(180);
    Serial.print("done");
  }

}