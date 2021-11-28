#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
/*
Produzido por:
Gabriel Xavier
&
Elisangela Arantes
*/

int botPin = 7, bottonPin = 6, ledPin = 13, ledPino = 10, ledPinoo = 9, ldrPin=0, valorLdr=0;

int pot=2; // pino do potenciometro
int valPot=0; // variavel q pega o valor do potenciometro


int pinTemp= 1; 
float temp = 0;


void setup() {
pinMode(ledPin, OUTPUT); // pino 13 como saida
pinMode(ledPino, OUTPUT); // pino 10 como saida
pinMode(ledPinoo, OUTPUT); // pino 9 como saida
pinMode(botPin, INPUT); // pino 7 como entrada
pinMode(bottonPin, INPUT); // pino 6 como entrada
  
pinMode(8, OUTPUT);

lcd.begin(16, 2);
}

void loop(){
//part1 e 2
int lerbt1;
int lerbt2;  
  
lerbt1=lerBotao1();
lerbt2=lerBotao2();
  
Botao1(lerbt1);
Botao2(lerbt2);
Botao1Lcd(lerbt1);
Botao2Lcd(lerbt2);
//part 3  
readLdr();
writeLdr();
//part4  
leValorPot();
calPot();
whritePot();
  
//part5  
readTemp();
decise();
writeTemp();
}
//botao1
int lerBotao1()
{
	int onoff = 0; // ligado ou desligado

	onoff = digitalRead(botPin); //lê o valor do botão 1 através de função
	return onoff;
} 

void Botao1Lcd(int onoff){
if (onoff!=HIGH) 
{ //decide se liga ou desliga o led do pino 13 através de função
  lcd.setCursor(7, 0);
  lcd.print("L1:L");
}
	else 
	{
	  lcd.setCursor(7, 0);
  	  lcd.print("L1:D");
	}
}

void Botao1(int onoff){
if (onoff!=HIGH) 
{ //decide se liga ou desliga o led do pino 13 através de função
digitalWrite(ledPin, HIGH);}

	else 
	{
	digitalWrite(ledPin, LOW);
	}
}
  
/////////////////////////////////////////////////////////////////////////
//botao2
int lerBotao2()
{
	int onoff2 = 0; // ligado ou desligado

	onoff2 = digitalRead(bottonPin); //lê o valor do botão 1 através de função
	return onoff2;
} 

void Botao2Lcd(int onoff2){
if (onoff2!=HIGH) 
{ //decide se liga ou desliga o led do pino 13 através de função
  lcd.setCursor(12, 0);
  lcd.print("L2:L");
}
	else 
	{
	  lcd.setCursor(12, 0);
  	  lcd.print("L2:D");
	}
}

void Botao2(int onoff){
if (onoff!=HIGH) 
{ //decide se liga ou desliga o led do pino 13 através de função
digitalWrite(ledPino, HIGH);}

	else 
	{
	digitalWrite(ledPino, LOW);
	}
}
////////////////////////////////////////////////////////////
void writeLdr()
{
lcd.setCursor(0, 0);
lcd.print("LD");
lcd.setCursor(2, 0);
lcd.print(valorLdr);//printa o valor da variavel q pega o valor do ldr
}


void readLdr()
{
   //pega o valor do ldr
valorLdr = analogRead(ldrPin);
}
/////////////////////////////////////
void leValorPot()
{
valPot =  analogRead(pot);
}



void calPot()
{
valPot = map(valPot,0,1023,0,255); 
analogWrite(ledPinoo,valPot ); 
}



void whritePot()
{
lcd.setCursor(10, 1);
lcd.print("PT:");

lcd.setCursor(13, 1);
lcd.print(valPot);
}
//////////////////////////////////////////
void readTemp()
{
//calculo da temp  
temp = (analogRead(pinTemp) * 0.48828125) - 49.95;
}


void decise()
{
//condicao se a temperatura tiver a cima de 50 apitar
  if (-50 + 0.488155 * (analogRead(pinTemp) - 20) > 37.5) {
    tone(8, 523, 1000); // toque o som 60 (C5 = 523 Hz)
    delay(1); // 1ms
    noTone(8);
    delay(1); // 1ms
  }
} 
void writeTemp()
{
//mostrar a temp no lcd
lcd.setCursor(0, 1);
lcd.print("TP:");
lcd.setCursor(3,1);
lcd.print(temp);  
//lcd.print("C");
/*ola professor caso queira deixar C de graus celsius
 descomente a linha 187 (ツ)*/
}
