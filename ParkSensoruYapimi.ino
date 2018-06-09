const int trig_pin = 2;
const int echo_pin = 3;
const int buzzer_pin = 4;

int sure = 0;
int mesafe = 0;

void setup() {

    pinMode(trig_pin,OUTPUT);
    pinMode(echo_pin,INPUT);
    pinMode(buzzer_pin,OUTPUT);
    Serial.begin(9600);
}

void loop() {

  digitalWrite(trig_pin,HIGH);
  delay(1);
  digitalWrite(trig_pin,LOW);

  sure = pulseIn(echo_pin,HIGH);
  
  mesafe = (sure/2)/29.1;

  Serial.println(mesafe);

  if (mesafe<5){
    digitalWrite(buzzer_pin,HIGH);
  }
  else if (mesafe<10){
    digitalWrite(buzzer_pin,HIGH);
    delay(200);
    digitalWrite(buzzer_pin,LOW);
    delay(50);
  }
  else if (mesafe<20){
    digitalWrite(buzzer_pin,HIGH);
    delay(200);
    digitalWrite(buzzer_pin,LOW);
    delay(250);
  }
  else if (mesafe<30){
    digitalWrite(buzzer_pin,HIGH);
    delay(200);
    digitalWrite(buzzer_pin,LOW);
    delay(500);
  }
  else if (mesafe<50){
    digitalWrite(buzzer_pin,HIGH);
    delay(200);
    digitalWrite(buzzer_pin,LOW);
    delay(1000);
  }
}
