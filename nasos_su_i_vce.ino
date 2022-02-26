#define hs A0
#define pu 6
void setup (){
  Serial.begin(9600);
  pinMode(hs,INPUT);
  pinMode(pu,OUTPUT);
}

void loop(){
  int val=analogRead(hs);
  Serial.println(val);
  int valp=val;
  valp=map(valp,700,240,0,100);
  valp=constrain(valp,0,100);
  if (valp<70 ){
    digitalWrite(pu,HIGH);
    delay(500);
  }
  else{
    digitalWrite(pu,LOW);
    delay(500);
  }
}
