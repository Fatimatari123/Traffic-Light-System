int red = 13;
int yellow = 12;
int green = 11;
int buzzer=8;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {//simple traffic light system
 
  digitalWrite(red, HIGH); 
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(10000);
  tone(buzzer,1000);
  delay(500);
  noTone(buzzer);
  delay(500);
  
  digitalWrite(red, LOW); 
  digitalWrite(yellow, HIGH); 
  digitalWrite(green, LOW);
  delay(10000);
  
  tone(buzzer,1000);//rings one indicting that car can move now
  delay(500);
  noTone(buzzer);
  delay(500);

  digitalWrite(red, LOW); 
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(1000);
  tone(buzzer,1000);
  delay(5000);
  noTone(buzzer);
  delay(500);
  
 
  
 
}
  
