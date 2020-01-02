void setup() {
  pinMode(3, INPUT);      
  pinMode(4, INPUT);      
}

void loop()
{ 
    digitalWrite(digitalRead(3), 4);
}
