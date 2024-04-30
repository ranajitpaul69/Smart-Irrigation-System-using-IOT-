int water;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(6,INPUT); 
}

void loop() { 
  water = digitalRead(6); 
  if(water == HIGH) 
  {
  digitalWrite(3,LOW);
  }
  else
  {
  digitalWrite(3,HIGH);
  }
  delay(400); 
}
