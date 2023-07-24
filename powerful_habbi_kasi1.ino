#define IN1 3
#define IN2 5
#define IN3 6
#define IN4 9
#define motor1 11
#define motor2 10
char reading;
void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 analogWrite(motor1,255);
  analogWrite(motor2,255);
  if(Serial.available()>0) {
 reading=Serial.read();
switch(reading){
case 'F': digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
analogWrite(motor1,255);
analogWrite(motor2,255);
break;
case 'B': digitalWrite(IN1, LOW);
digitalWrite(IN2, HIGH);
digitalWrite(IN3, LOW);
digitalWrite(IN4, HIGH);
analogWrite(motor1,255);
analogWrite(motor2,255);
break;
case 'L': digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, HIGH);
digitalWrite(IN4, LOW);
analogWrite(motor1,0);
analogWrite(motor2,255);
break;

case 'R': digitalWrite(IN1, HIGH);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
analogWrite(motor1,255);
analogWrite(motor2,0);
break;
case 'S':
  digitalWrite(IN1, LOW);
digitalWrite(IN2, LOW);
digitalWrite(IN3, LOW);
digitalWrite(IN4, LOW);
  digitalWrite(motor1, 0);
  digitalWrite(motor2, 0);
      break;

}}}