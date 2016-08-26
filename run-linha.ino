 
int sinalparaoled = 8; //Pino do led
int sinalparaoled2 = 9; //Pino do led   

int pinosensor = 7;   //Ligado ao pino "coletor" do sensor óptico
int pinosensor2 = 6;   //Ligado ao pino "coletor" do sensor óptico   

int leitura;      //Armazena informações sobre a leitura do sensor
int leitura2;      //Armazena informações sobre a leitura do sensor    

int estadoled = 0;   //Armazena o estado do led (ligado/desligado)
int estadoled2 = 0;   //Armazena o estado do led (ligado/desligado)    
   
void setup()  
{  
  pinMode(sinalparaoled, OUTPUT); //Define o pino do led como saida   
  pinMode(pinosensor, INPUT);   //Define o pino do sensor como entrada
  Serial.begin(9600);
}  
   
void loop()  
{  
  //Le as informações do pino do sensor
  leitura = digitalRead(pinosensor);
  leitura2 = digitalRead(pinosensor2);   
  if (leitura != 1) //Verifica se o objeto foi detectado  
  {  
    
    //Inverte o estado do led (ligado / desligado) 
    estadoled = !estadoled; 

    //Liga ou desliga o led conforme "estadoled" 
    digitalWrite(sinalparaoled, estadoled);
    Serial.println("sensor1");  
  }

  if (leitura2 != 1) //Verifica se o objeto foi detectado  
  {  
    

    //Inverte o estado do led (ligado / desligado) 
    estadoled2 = !estadoled2; 

    //Liga ou desliga o led conforme "estadoled" 
    digitalWrite(sinalparaoled2, estadoled2);
    Serial.println("sensor2"); 
  }   

     
}  
     


