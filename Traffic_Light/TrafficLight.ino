#define R1 1
#define Y1 2
#define G1 3

#define R2 4
#define Y2 5
#define G2 6

#define R3 7
#define Y3 8
#define G3 9

void setup() {
  pinMode(R1, OUTPUT); //T1 R
  pinMode(Y1, OUTPUT); //T1 Y
  pinMode(G1, OUTPUT); //T1 G
  pinMode(R2, OUTPUT); //T2 R
  pinMode(Y2, OUTPUT); //T2 Y
  pinMode(G2, OUTPUT); //T2 G
  pinMode(R3, OUTPUT); //T3 R
  pinMode(Y3, OUTPUT); //T3 Y
  pinMode(G3, OUTPUT); //T3 G
}

void loop() {
  //0 - 10 sec
  digitalWrite(G1, HIGH);
  digitalWrite(R2, HIGH);
  digitalWrite(R3, HIGH);
  delay(10000);
  
  //10 - 20 sec
  digitalWrite(R2, LOW);
  digitalWrite(Y2, HIGH);
  delay(10000);
  
  //20 - 30 sec
  digitalWrite(G1, LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(Y2, LOW);
  digitalWrite(G2, HIGH);
  delay(10000);
  
  //30 - 40 sec
  digitalWrite(R3, LOW);
  digitalWrite(Y3, HIGH);
  delay(10000);
  
  //40 - 50 sec
  digitalWrite(G2, LOW);
  digitalWrite(R2, HIGH);
  digitalWrite(Y3, LOW);
  digitalWrite(G3, HIGH);
  delay(10000);

  //50 - 60 sec
  digitalWrite(R1, LOW);
  digitalWrite(Y1, HIGH);
  delay(10000);
  
  //reset for next loop
  digitalWrite(Y1, LOW);
  digitalWrite(R2, LOW);
  digitalWrite(G3, LOW);
}
