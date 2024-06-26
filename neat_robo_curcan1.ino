const int trigpin=9;
const int buzzerPin=11;
const int echopin=10;
float duration,distance;
void setup() {
  pinMode(buzzerPin,OUTPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
 
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=(duration*.0343)/2;
  Serial.print("Distance:");
  Serial.println(distance);
  delay(100);
  
  
  // put your main code here, to run repeatedly:


{
if(distance>=200)
{
 tone(buzzerPin,1);
delay(1000);

}
else
{
  noTone(buzzerPin);
delay(1000);
}
}
}
