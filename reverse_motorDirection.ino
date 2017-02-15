int button1 = 2;
int button2 = 3;
int motor_r = 7;
int motor_l = 8;
int val1 = 0;
int val2 = 0;

void setup() {
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);  
  pinMode(motor_r, OUTPUT);
  pinMode(motor_l, OUTPUT);
  Serial.begin(9600);
  Serial.println("Initialized....");
}

void loop() {
  val1 = digitalRead(button1);
  val2 = digitalRead(button2); 
  Serial.print(val1);
  Serial.print("    ");
  Serial.println(val2);
  
  if(digitalRead(val1) == HIGH && digitalRead(val2) == LOW) {
    digitalWrite(motor_r, HIGH);
    digitalWrite(motor_l, LOW);
   } 
   else if(digitalRead(val1) == LOW && digitalRead(val2) == HIGH) {
    digitalWrite(motor_r, LOW);
    digitalWrite(motor_l, HIGH);
   } 
   else if(digitalRead(val1) == LOW && digitalRead(val2) == LOW){
    digitalWrite(motor_r, LOW);
    digitalWrite(motor_l, LOW);     
  }
}
