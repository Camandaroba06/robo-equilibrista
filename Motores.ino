

const int OUTA = 3;
const int OUTB = 5;
const int OUTC = 6;
const int OUTD = 10;

void init_motores(){
  pinMode(OUTA, OUTPUT);
  pinMode(OUTB, OUTPUT);
  pinMode(OUTC, OUTPUT);
  pinMode(OUTD, OUTPUT);
  
}

void PMWControleMotores(double comando){

  if(comando > 0){
    analogWrite(OUTA, 0); /* Controlando o Motor da Direita Para T.*/
    analogWrite(OUTB, abs(comando)); /* Controlando o Motor da Direita Para F.*/
    analogWrite(OUTC, 0); /* Controlando o Motor da Esquerda Para T.*/
    analogWrite(OUTD, abs(comando)); /* Controlando o Motor da Esquerda Para F.*/
  }else{
    analogWrite(OUTA, abs(comando)); /* Controlando o Motor da Direita Para T.*/
    analogWrite(OUTB, 0); /* Controlando o Motor da Direita Para F.*/
    analogWrite(OUTC, abs(comando)); /* Controlando o Motor da Esquerda Para T.*/
    analogWrite(OUTD, 0); /* Controlando o Motor da Esquerda Para F.*/
    
  }
}
