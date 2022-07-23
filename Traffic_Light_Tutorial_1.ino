    
    // TRAFFIC LIGHT TUTORIAL 1
    
    void setup()
    {
      pinMode(4, OUTPUT); // For Red LED
      pinMode(3, OUTPUT); // For Yellow LED
      pinMode(2, OUTPUT); // For Green LED
    }
    
    void loop()
    {
      
      digitalWrite(2, HIGH); // For green LED
      delay(5000); // Wait for 3 second
      
      digitalWrite(2, LOW);
      delay(500);
    
      
      
      digitalWrite(3, HIGH); // For orange LED
      delay(1000);  // Wait for 1 second
      
      digitalWrite(3, LOW);
      delay(500); // Wait for 3 second
      
    
      
      digitalWrite(4, HIGH);  // For the red LED
      delay(2000); // Wait for 3 second
      
      digitalWrite(4, LOW);
      delay(500); // Wait for 3 second 
    }
