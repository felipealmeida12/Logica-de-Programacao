// C++ code

int numero = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  for(int contador = 0; contador <= 100; contador += 5){
   Serial.println("Contador : " + String(contador)); 
  }
   delay(1200);
}
  

   