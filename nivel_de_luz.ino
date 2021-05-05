const int LEDPin = 13;
const int LDRPin = A0;

void setup() 
{
  pinMode(LEDPin, OUTPUT);
  pinMode(LDRPin, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  float Vanalogo;
  float ConVolt;
  float Lux;
  Vanalogo = analogRead(LDRPin);//Valor del voltaje equivalente a la Luz ya en términos de 1023 bits
  ConVolt = (Vanalogo*5.0)/1023.0;//Voltaje en terminos de 5V
  Lux = pow(2.718281828459045235360,(ConVolt+0.6015)/0.5792);
  //Lux =((ConVolt-3.6136)/0.0001);
  
  if (Lux > 5000) 
  {
    digitalWrite(LEDPin, HIGH);
  }
  else 
  {
    digitalWrite(LEDPin, LOW);
  }
//  Serial.print("V ANALOGO: ");
//  Serial.println(ConVolt);
//  Serial.print("LE LLEGA DE LUZ: ");
//  Serial.println(Lux);
//  Serial.println();
//  delay(2000);

  Serial.println("Prueba" );
  Serial.println(Vanalogo);
  delay(500);
}



//const int LEDPin = 13;
//const int LDRPin = A0;
//const int umbral = 2000;
//const float R1 = 613.3;
//
//void setup() 
//{
//  pinMode(LEDPin, OUTPUT);
//  pinMode(LDRPin, INPUT);
//  Serial.begin(9600);
//}
//
//void loop() 
//{
//  float Vanalogo;
//  float ConVolt;
//  float Lux;
//  float RL;
//  
//  Vanalogo = analogRead(LDRPin);
//  
//  ConVolt = (Vanalogo*5.0)/1023.0;
//  
//  RL = (R1)*( (5.0 / ConVolt) -1 );
//  
//  Lux = pow( (RL/126951) , -1.1655 );
//  
//  if (Lux < umbral) 
//  {
//    digitalWrite(LEDPin, HIGH);
//  }
//  else 
//  {
//    digitalWrite(LEDPin, LOW);
//  }
//  Serial.print("El valor de RL es: ");
//  Serial.println(RL);
//  Serial.print("El valor de V analogico es: ");
//  Serial.println(ConVolt);
//  Serial.print("El valor de Lux es: ");
//  Serial.println(Lux);
//  Serial.println();
//  delay(2000);
//}
