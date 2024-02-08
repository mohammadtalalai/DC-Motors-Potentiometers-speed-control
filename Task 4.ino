int btn1 = 9 ; 
int btn2 = 8 ; 
int R1= A0 ; 
int R2 = A1 ; 
int motor1= 3 ;
int motor2= 5 ; 
char motorSpeed1 ; 
char sensorValue1 ; 
char motorSpeed2 ; 
char sensorValue2 ;
char Reading ; 
void setup()
{
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(R1, INPUT);
  pinMode(R2, INPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  Serial.begin(9600);
  


}

void loop()
{
  if (Serial.available()){
    Serial.read();
    switch(Reading) {
      case 'L' :
      digitalRead(btn1)==HIGH ;
      Serial.println("btn1 Turns On");
      break ; 
      
      case 'C' :
      digitalRead(btn1)==LOW;
      Serial.println("btn1 Turns Off");
      break ; 
      
      case 'R' :
      digitalRead(btn2)==HIGH ;
      Serial.println("btn2 Turns On");
      break ; 
      
      case 'M' :
      digitalRead(btn2)==LOW;
      Serial.println("btn2 Turns Off");
      break ; 
    }
  }
    
    if (digitalRead(btn1) == HIGH){
      sensorValue1 = analogRead(R1);
      motorSpeed1 = map(sensorValue1 , 0  , 1023   , 0 , 255);
      analogWrite(motor1  , motorSpeed1 );
    }
  else {
    analogWrite(motor1  , 0 );
  }
  
  if (digitalRead(btn2) == HIGH){
      sensorValue2 = analogRead(R2);
      motorSpeed2 = map(sensorValue2 , 0  , 1023   , 0 , 255);
      analogWrite(motor2  , motorSpeed2 );
    }
  else {
    analogWrite(motor2  , 0 );
  }
  
    
      
      
 
  
 
    
  
}
  
  
  
  
  
 