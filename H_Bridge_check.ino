void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);  //M1 Enable -- Left Motor
  pinMode(3,OUTPUT);  //M2 Enable -- Right Motor
  pinMode(4,OUTPUT);  //M1 In 1
  pinMode(5,OUTPUT);  //M1 In 2
  pinMode(6,OUTPUT);  //M2 In 1
  pinMode(7,OUTPUT);  //M2 In 2
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
    Serial.println("Yo");
  
  delay(2000);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
    Serial.println("Lo");

  delay(2000); 
}
