//Aquí almacenamos los datos recogidos del LDR:
int valorLDR = 0;  
 
//Decimos que pines vamos a utilizar para LED

int pinLed1 = 11;
int pinLed2 = 10;
int pinLed3 = 9;
int pinLed4 = 8;
 
//Y que pin para la LDR
int pinLDR = 0;
 
void setup()
{
  //Establecemos como salida los pines para LED
  
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
 
  //Le decimos que vamos a usar una referencia externa
  analogReference(EXTERNAL); 
 
}
 
void loop()
{
  //Guardamos el valor leido en una variable
  valorLDR = analogRead(pinLDR);
 
  //Y comenzamos las comparaciones:
  if(valorLDR >= 423)
  {
    
    digitalWrite(pinLed1, LOW);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, LOW);
    digitalWrite(pinLed4, LOW);
  }
  else  if((valorLDR >= 223) & (valorLDR < 423)) //este nos indica la funcion que ara el programa
  {
    
    digitalWrite(pinLed1, LOW);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, LOW);
    digitalWrite(pinLed4, LOW);
  }
  else  if((valorLDR >= 223) & (valorLDR < 423))
  {
    
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, LOW);
    digitalWrite(pinLed3, LOW);
    digitalWrite(pinLed4, LOW);
  }
  else  if((valorLDR >= 223) & (valorLDR < 423))
  {
    
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, LOW);
    digitalWrite(pinLed4, LOW);
  }
  else  if((valorLDR >= 223) & (valorLDR < 423))
  {
    
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, HIGH);
    digitalWrite(pinLed4, LOW);
  }
  else
  {
    
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, HIGH);
    digitalWrite(pinLed3, HIGH);
    digitalWrite(pinLed4, HIGH);
  }
 
}
