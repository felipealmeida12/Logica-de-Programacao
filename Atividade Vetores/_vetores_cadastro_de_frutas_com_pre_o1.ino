// C++ code
//Variáveis Globais
//vetor tamanho 6: vai de 0 até 5
String frutas[6];
float precosFrutas[6];
void setup()
{
 Serial.begin(9600);
  
  Serial.println("*** SACOLAO DO ZEH ***");
  Serial.println();
  
  
  Serial.println("Oh ZEH, bora cadastrar as frutas!");
  
  Serial.println();
  
  for(int i = 0; i <= 5; i++){
    
    //pega a fruta do usuário
      Serial.println("Informe a "+ String(i + 1)+"a Fruta");
  while(!Serial.available());
  String frutaDigitada = Serial.readString();
    
     //pega o preco da fruta 
      Serial.println("Qual o preco de " + frutaDigitada + "?");
  while(!Serial.available());
 float precoDigitado = Serial.parseFloat();
    
    //põe a fruta na sacola / cadastra a fruta no array/vetor
    frutas[i] = frutaDigitada;
    precosFrutas[i] = precoDigitado;
    
  }//fim do for
  
  Serial.println("Exibindo os valores cadastrados: " );
  Serial.println();
  
  for(int i = 0; i <= 5; i++){
  Serial.println(String(i + 1) + "a Fruta: " + frutas[i] );
    Serial.println("Preco de " + String(precosFrutas[i]));
    
  }
  
}

void loop()
{
  
}