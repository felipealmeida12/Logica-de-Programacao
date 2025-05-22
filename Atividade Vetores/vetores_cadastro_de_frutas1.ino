// C++ code
//
void setup()
{
 Serial.begin(9600);
  
  Serial.println("*** SACOLAO DO ZEH ***");
  Serial.println();
  
  String frutas[6];
  
  Serial.println("Oh ZEH, bora cadastrar as frutas!");
  
  Serial.println();
  
  for(int i = 0; i <= 5; i++){
    
    //pega a fruta do usuário
      Serial.println("Informe a "+ String(i + 1)+"a Fruta");
  while(!Serial.available());
  String frutaDigitada = Serial.readString();
    
    //põe a fruta na sacola / cadastra a fruta no array/vetor
    frutas[i] = frutaDigitada;
    
  }//dim do for
  
  for(int i = 0; i <= 5; i++){
  Serial.println(String(i + 1) + "a Fruta: " + frutas[i] );
    
  }
  
}

void loop()
{
  
}