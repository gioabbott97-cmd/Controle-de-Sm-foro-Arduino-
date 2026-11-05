// C++ code
//
int ledVerde = 1;
int ledAmarelo = 2;
int ledVermelho = 3;

 
void setup()
{
  pinMode (LED_BUILTIN,OUTPUT);
  pinMode (1, OUTPUT);
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
 }


void loop()
{
  digitalWrite (ledVerde, 1);
  digitalWrite (ledAmarelo, 0);
  digitalWrite (ledVermelho, 0);
  delay (3000);
    
  digitalWrite (ledVerde, 0);
  digitalWrite (ledAmarelo, 1);
  digitalWrite (ledVermelho, 0);
  delay (1500);
  
  digitalWrite (ledVerde, 0);
  digitalWrite (ledAmarelo, 0);
  digitalWrite (ledVermelho, 1);
  delay (3000); 
}