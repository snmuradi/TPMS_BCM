
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7); // LCD pin declaration
const int ledPin = 2;                  // LED is connected to digital pin 2

int pMin = 0;
int pMax = 1023;
int sen1 = 0;
int sen2 = 0;
int sen3 = 0;
int sen4 = 0;

void setup() {
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(A0, INPUT); // Initialize sensor1 as input
  pinMode(A1, INPUT); // Initialize sensor2 as input
  pinMode(A2, INPUT); // Initialize sensor3 as input
  pinMode(A3, INPUT); // Initialize sensor4 as input
  pinMode(ledPin, OUTPUT); // Initialize LED as output
}

void loop() {
  sen1 = analogRead(A0);
  sen1 = map(sen1, pMin, pMax, 0, 100);
  sen2 = analogRead(A1);
  sen2 = map(sen2, pMin, pMax, 0, 100);
  sen3 = analogRead(A2);
  sen3 = map(sen3, pMin, pMax, 0, 100);
  sen4 = analogRead(A3);
  sen4 = map(sen4, pMin, pMax, 0, 100);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(sen1);
  lcd.print(" ");
  lcd.setCursor(3, 0);
  lcd.print(sen2);
  lcd.print(" ");
  lcd.setCursor(6, 0);
  lcd.print(sen3);
  lcd.print(" ");
  lcd.setCursor(9, 0);
  lcd.print(sen4);
  lcd.setCursor(12, 0);
  lcd.print(" PSI");
  delay(1000);

  if ((sen1 >= 25 && sen1 <= 35) && (sen2 >= 25 && sen2 <= 35) && (sen3 >= 25 && sen3 <= 35) && (sen4 >= 25 && sen4 <= 35)) {
    lcd.setCursor(0, 1);
    lcd.print("ALL TP NORMAL");
    digitalWrite(ledPin, LOW);
  } else {
    if (sen1 < 25 || sen1 > 35) alertTyre(1, sen1);
    if (sen2 < 25 || sen2 > 35) alertTyre(2, sen2);
    if (sen3 < 25 || sen3 > 35) alertTyre(3, sen3);
    if (sen4 < 25 || sen4 > 35) alertTyre(4, sen4);
  }
}

void alertTyre(int tyreNumber, int pressure) {
  lcd.setCursor(0, 1);
  if (pressure < 25) {
    lcd.print(tyreNumber);
    lcd.print("th tyre TP LOW");
  } else if (pressure > 35) {
    lcd.print(tyreNumber);
    lcd.print("th tyre TP HIGH");
  }
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
}

        
