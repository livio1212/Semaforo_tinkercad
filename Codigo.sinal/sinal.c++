//  C++ code

//

void setup()

{
pinMode(13, OUTPUT);//LED VERMELHO
pinMode(12, OUTPUT);//LED AMARELO
pinMode(11, OUTPUT);//LED VERDE
}

void loop()
{
digitalWrite(13, HIGH);//LIGA LED VERMELHO
delay(5000); //Wait for 5000 milisecond(s)
digitalWrite(13,LOW);//DESLIGAR LED VERMELHO

digitalWrite(12, HIGH);//LIGA LED AMARELO
delay(3000); //Wait for 3000 milisecond(s)
digitalWrite(12,LOW);//DESLIGAR LED AMARELO

digitalWrite(11, HIGH);//LIGA LED VERDE
delay(7000); //Wait for 7000 milisecond(s)
digitalWrite(11,LOW);//DESLIGAR LED VERDE

}
