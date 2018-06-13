// Arduino pin numbers
const int X_pin = 1; // analog pin connected to first X output
const int Y_pin = 0; // analog pin connected to first Y output   
const int X2_pin = 3; // analog pin connected to second X output
const int Y2_pin = 2; // analog pin conected to second Y output
int Player1Shoot = 2;
int Player2Shoot = 7;

int valP1 = 0;
int valP2 = 0;

int buttonState = 0;

void setup() {
  pinMode(Player1Shoot, INPUT);
  pinMode(Player2Shoot, INPUT);
  Serial.begin(9600);
}

void loop() {
  valP1 = digitalRead(Player1Shoot);
  valP2 = digitalRead(Player2Shoot);
  Serial.print("Jugador1:");
  Serial.print("\n");
  Serial.print("X1-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y1-axis: ");
  Serial.println(analogRead(Y_pin));
  Serial.print("Player 1 Shoot button:");
  Serial.println(digitalRead(Player1Shoot));
  Serial.print("\n");
  Serial.print("Jugador 2:");
  Serial.print("\n");
  Serial.print("X2-axis: ");
  Serial.print(analogRead(X2_pin));
  Serial.print("\n");
  Serial.print("Y2-axis: ");
  Serial.println(analogRead(Y2_pin));
  Serial.print("\n");
  Serial.print("Player 2 Shoot button:");
  Serial.println(digitalRead(Player2Shoot));
  Serial.print("\n");
  delay(500);
}


