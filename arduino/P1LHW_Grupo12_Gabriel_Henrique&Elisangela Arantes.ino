
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int pVerde = 6;  
int pVermelho = 8;
int cVerde = 9;
int cAmarelo = 10;
int cVermelho = 13;

void setup() {
  
  pinMode(pVerde, OUTPUT);
  pinMode(pVermelho, OUTPUT);
  pinMode(cVerde, OUTPUT);
  pinMode(cAmarelo, OUTPUT);
  pinMode(cVermelho, OUTPUT);
 
  digitalWrite(cVerde, HIGH); 
  digitalWrite(cAmarelo, LOW);
  digitalWrite(cVermelho, LOW);
  digitalWrite(pVerde, LOW);
  digitalWrite(pVermelho, HIGH);
  
  lcd.begin(16, 2);

  lcd.setCursor(0, 0);
  lcd.print("VD:   AM:   VM: ");
  
  lcd.setCursor(0, 1);
  lcd.print("VD:         VM: ");
}

void loop() {
  /*chama a função 
  para apaga o verde pedestre, apaga o vermelho carro*/
  func1();
/*chama a função para acende o verde 
carro e acende o vermelho pedestre*/
  func1C();
  delay(3000); // Aguarda 3 segundos
  //chama a função para apaga o verde carro
  func2();
  //chama a função para acende o amarelo carro
  func2C();
  delay(3000);
  /*chama a função para apaga o amarelo carro, 
apaga o vermelho pedestre*/
  func3();
  /*chama a função para acende vermelho carro 
  e acende verde pedestre*/
  func3C();
  delay(3000);  
}
 
  /*chama a função 
  para apaga o verde pedestre, apaga o vermelho carro*/
void func1()
{
  digitalWrite(cVermelho, LOW); 
  digitalWrite(pVerde, LOW);
  
  lcd.setCursor(0, 0);
  lcd.print("VD:S  AM:   VM: ");
  
  lcd.setCursor(0, 1);
  lcd.print("VD:         VM:S");
  
}

/*chama a função para acende o verde 
carro e acende o vermelho pedestre*/
void func1C()
{
  digitalWrite(cVerde, HIGH); 
  digitalWrite(pVermelho, HIGH);
  
    lcd.setCursor(0, 0);
  lcd.print("VD:S  AM:   VM: ");
  
  lcd.setCursor(0, 1);
  lcd.print("VD:         VM:S");
}
//chama a função para apaga o verde carro
void func2()
{
  digitalWrite(cVerde, LOW);
  
  lcd.setCursor(0, 0);
  lcd.print("VD:   AM:   VM: ");
}
//chama a função para acende o amarelo carro
void func2C()
{
  digitalWrite(cAmarelo, HIGH);
  
  lcd.setCursor(0, 0);
  lcd.print("VD:   AM:S  VM: ");
  
  lcd.setCursor(0, 1);
  lcd.print("VD:         VM:S");
}
/*chama a função para apaga o amarelo carro, 
apaga o vermelho pedestre*/
void func3()
{
  digitalWrite(cAmarelo, LOW);
  digitalWrite(pVermelho, LOW); 
  
  lcd.setCursor(0, 0);
  lcd.print("VD:   AM:   VM: ");
  
  lcd.setCursor(0, 1);
  lcd.print("VD:         VM: ");
}
  /*chama a função para acende vermelho carro 
  e acende verde pedestre*/
void func3C()
{
  digitalWrite(cVermelho, HIGH);
  digitalWrite(pVerde, HIGH);
  
  lcd.setCursor(0, 0);
  lcd.print("VD:   AM:   VM:S");
  
  lcd.setCursor(0, 1);
  lcd.print("VD:S        VM: ");
}