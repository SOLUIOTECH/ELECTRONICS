  #include <Servo.h>

  Servo myservo;
  
  void setup() {
    myservo.attach(9);
    myservo.write(0);
  
  }
  
  void loop() {
    for(int i = 0; i <180; i++)
    {
      myservo.write(i);
      delay(50);
    }
    for(int b = 180; b > 0; b--)
    {
      myservo.write(b);
      delay(50)
    }
  }
