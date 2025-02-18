# Projeto Semáforo com Arduino

Este projeto consiste na construção de um semáforo utilizando Arduino, com a utilização de 3 fusíveis de 220V e 3 fios terra para a conexão dos LEDs. O objetivo deste projeto é demonstrar conceitos básicos de eletrônica e programação, aplicando-os na simulação de um sistema de controle de tráfego.

---

## 📋 Descrição do Projeto

- **Objetivo:** Construir um semáforo funcional utilizando Arduino, onde cada LED (vermelho, amarelo e verde) simula as fases de um semáforo real.
- **Componentes principais:**
  - Arduino (modelo Uno, Mega, etc.)
  - 3 LEDs (vermelho, amarelo e verde)
  - 3 resistores (valor adequado para os LEDs)
  - 3 fusíveis de 220V (utilizados como proteção)
  - 3 fios terra (para a conexão adequada dos LEDs)
  - Protoboard e cabos de conexão

---

## 🔧 Materiais Utilizados

- **Arduino Uno** (ou outro compatível)
- **LEDs**:
  - 1 LED vermelho
  - 1 LED amarelo
  - 1 LED verde
- **Resistores**: Valores adequados para limitar a corrente dos LEDs (ex.: 220Ω ou conforme necessidade do LED)
- **Fusíveis de 220V**: 3 unidades (para proteção do circuito)
- **Fios Terra**: 3 fios para assegurar a correta aterragem dos LEDs
- **Protoboard** e cabos jumper
![Magnificent Albar](https://github.com/user-attachments/assets/465e1fa7-4f4d-4bd6-aa60-bbb70780ec50)

---

## ⚙️ Funcionamento

O semáforo foi programado para simular o ciclo típico de um semáforo:
1. **Vermelho**: Sinal de parada.
2. **Amarelo**: Sinal de transição.
3. **Verde**: Sinal de liberação para seguir.

Cada LED acende por um tempo pré-determinado, e a sequência é repetida em loop. Os fusíveis de 220V foram integrados ao circuito para proteção, garantindo que eventuais picos de tensão não danifiquem os componentes, enquanto os fios terra asseguram uma conexão elétrica segura para os LEDs.

---

## 📄 Diagrama de Conexão

> **Nota:** Inclua o diagrama do circuito (imagem ou link) para facilitar a compreensão do layout.  
> Exemplo:
> 
> ![Diagrama do Semáforo](link_para_o_diagrama)

---

## 🚀 Como Executar o Projeto

1. **Montagem do Circuito:**  
   Monte o circuito conforme o diagrama de conexão. Certifique-se de conectar os LEDs, resistores, fusíveis e fios terra corretamente na protoboard e no Arduino.

2. **Upload do Código:**  
   Conecte o Arduino ao computador e utilize a IDE do Arduino para carregar o código disponível neste repositório.  
   ```cpp
   // Exemplo de código para o semáforo
   const int ledVermelho = 2;
   const int ledAmarelo = 3;
   const int ledVerde = 4;

   void setup() {
     pinMode(ledVermelho, OUTPUT);
     pinMode(ledAmarelo, OUTPUT);
     pinMode(ledVerde, OUTPUT);
   }

   void loop() {
     digitalWrite(ledVermelho, HIGH);
     delay(5000); // vermelho aceso por 5 segundos
     digitalWrite(ledVermelho, LOW);

     digitalWrite(ledAmarelo, HIGH);
     delay(2000); // amarelo aceso por 2 segundos
     digitalWrite(ledAmarelo, LOW);

     digitalWrite(ledVerde, HIGH);
     delay(5000); // verde aceso por 5 segundos
     digitalWrite(ledVerde, LOW);
   }
