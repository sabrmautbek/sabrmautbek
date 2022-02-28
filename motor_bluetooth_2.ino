#define oa 3
#define ob 2
int val;
char var;

void setup() {

  Serial.begin(9600);
  pinMode(ob, OUTPUT);
  pinMode(oa, OUTPUT);


}

void loop() {
  Serial.println(var);
  if (Serial.available()) {
    var = Serial.read();
    if (var == 'F' ) {
      digitalWrite(oa, HIGH);
      digitalWrite(ob, LOW);
    }
    if (var == 'B'){
      digitalWrite(oa,LOW );
      digitalWrite(ob,HIGH); 
    }
   
    else {
      digitalWrite(oa, LOW );
      digitalWrite(ob, LOW);
    }
  }

}
