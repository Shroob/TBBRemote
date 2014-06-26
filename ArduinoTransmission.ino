#include <SoftwareSerial.h>

int bluetoothTx = 2;
int bluetoothRx = 3;


SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

void setup()
{
  
  Serial.begin(9600);//XBee
  bluetooth.begin(9600);
  
}

void loop()
{
  
  if(bluetooth.available()){
    char toSend = (char)bluetooth.read();
  
    if (toSend=='a')
      Serial.print('a');
    if (toSend=='b')
      Serial.print('b');
    if (toSend=='c')
      Serial.print('c');
    if (toSend=='d')
      Serial.print('d');
    if (toSend=='e')
      Serial.print('e');
    if (toSend=='f')
      Serial.print('f');
    if (toSend=='g')
      Serial.print('g');
    if (toSend=='h')
      Serial.print('h');
   } 
}
