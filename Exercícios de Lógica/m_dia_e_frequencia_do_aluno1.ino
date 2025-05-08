// C++ code
//Variáveis

float n1,n2, media;
int frequencia = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
  
 Serial.println("Digite a primeira nota");
 while (! Serial.available()); 
 n1 = Serial.pasFloat();//copiei o parseFloat
  
 Serial.pirntln("Digite a segunda nota");
 while (! Serial.available());
 n2 = Serial.parseFloat
   
 Serial.println("Digite a frequencia");
  
 //Processamento
  media = (n1 + n2) / 2;
  Serial.println("Media: " + String(media));
  if (media >= 6) 
  
}
   /* Acabei não conseguindo lembrar da parte de frequencia então acabei fazendo o da nota */