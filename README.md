Semáforo com LED (Tinkercad) Projeto da disciplina de Sistemas Embarcados, Desenvolvimento de Sistemas ETEC.

O que faz: Simula um semáforo básico com LEDs controlados por código simples em C++.

Primeiro crio as variáveis ​​dos LEDs que irão representar as luzes do semáforo:

int ledVerde = 1;
int ledAmarelo = 2;
int ledVermelho = 3;

A seguir, ativo os pinos relacionados de saída no arduino que irão trabalhar com os LEDs:

void setup()

{ pinMode (LED_BUILTIN,OUTPUT);
pinMode (1, OUTPUT);
pinMode (2, OUTPUT);
pinMode (3, OUTPUT);
}

E por fim determinar quais devem permanecer acesos e desligados em cada intervalo, juntamente com o tempo que cada uma deve permanecer ativa no loop:

void loop()

{ digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 0);
digitalWrite(ledVermelho, 0);
delay (3000);

digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 1);
digitalWrite(ledVermelho, 0);
delay (1500);

digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledVermelho, 1);
delay (3000); }
