// C++ code
/*Do While- E uma estrutura de reperticao que executa pelo menos uma vez independente da condicao.
Em seguida continuara executando enquanto a condicao for verdadeira .
*/

/* For - É uma estrutura de repetição que tem dentro da condição a
inicialização, a própria condição do For e incremento.
Ponto de atenção: as definições são sepaadas por ;
*/

void setup()
{
  Serial.begin(9600);
}

void loop(){
  //for
  for(int contador = 1; contador <= 5; contador++){
  Serial.println("Contador " + String(contador));
  }
  delay(1000);
}
  

   