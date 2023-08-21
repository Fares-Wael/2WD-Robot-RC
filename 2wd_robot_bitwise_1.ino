byte movement[3]={
  0b0101011, //forword
  0b0000000, //stop
  0b0010111, //backword
};
byte pins[6]={3,5,6,9,10,11};
byte IN1=pins[0];
byte IN2=pins[1];
byte IN3=pins[2];
byte IN4=pins[3];
byte motor1=pins[4];
byte motor2=pins[5];
byte j =0;
char reading;
void setup()
{
  for (byte i=0;i<=sizeof(pins);i++){
    pinMode(pins[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop()
{
   for (byte j =0;j<3;j++){
  for (byte i =0;i<6;i++){
    digitalWrite(pins[i],movement[j]&32>>i);
 }
    if (j==0){delay(1000);}
    if (j==1){delay(500);}
    if (j==2){delay(1000);}
  }}