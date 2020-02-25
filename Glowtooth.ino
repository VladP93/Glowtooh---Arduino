#include <SoftwareSerial.h>// import the serial library

SoftwareSerial BT(10, 11); // RX, TX
int foco1=7, foco2=6, foco3=5, foco4=4, foco5=22, foco6=24, foco7=26, foco8=28;
String BluetoothData;

void setup() {
  Serial.begin(9600);
  BT.begin(9600);
  BT.println("Bluetooth On please press 1 or 0 blink LED ..");
  pinMode(foco1,OUTPUT);
  pinMode(foco2,OUTPUT);
  pinMode(foco3,OUTPUT);
  pinMode(foco4,OUTPUT);
  pinMode(foco5,OUTPUT);
  pinMode(foco6,OUTPUT);
  pinMode(foco7,OUTPUT);
  pinMode(foco8,OUTPUT);
}

void loop() {
  if (BT.available()){
    BluetoothData=BT.readString();
    Serial.println(BluetoothData);
  
    if(BluetoothData.equals("1,1")){
      digitalWrite(foco1,1);
      BT.println("Ecendido");
    }
    if (BluetoothData.equals("1,0")){
      digitalWrite(foco1,0);
      BT.println("Apagado");
    }

    if(BluetoothData.equals("2,1")){
      digitalWrite(foco2,1);
      BT.println("Ecendido");
    }
    if (BluetoothData.equals("2,0")){
      digitalWrite(foco2,0);
      BT.println("Apagado");
    }

    if(BluetoothData.equals("3,1")){
      digitalWrite(foco3,1);
      BT.println("Ecendido");
    }
    if (BluetoothData.equals("3,0")){
      digitalWrite(foco3,0);
      BT.println("Apagado");
    }

    if(BluetoothData.equals("4,1")){
      digitalWrite(foco4,1);
      BT.println("Ecendido");
    }
    if (BluetoothData.equals("4,0")){
      digitalWrite(foco4,0);
      BT.println("Apagado");
    }
    if(BluetoothData.equals("5,1")){
      digitalWrite(foco5,1);
      BT.println("Ecendido");
    }
    if (BluetoothData.equals("5,0")){
      digitalWrite(foco5,0);
      BT.println("Apagado");
    }
    if(BluetoothData.equals("6,1")){
      digitalWrite(foco6,1);
      BT.println("Ecendido");
    }
    if (BluetoothData.equals("6,0")){
      digitalWrite(foco6,0);
      BT.println("Apagado");
    }
    if(BluetoothData.equals("7,1")){
      digitalWrite(foco7,1);
      BT.println("Ecendido");
    }
    if (BluetoothData.equals("7,0")){
      digitalWrite(foco7,0);
      BT.println("Apagado");
    }
    if(BluetoothData.equals("8,1")){
      digitalWrite(foco8,1);
      BT.println("Ecendido");
    }
    if (BluetoothData.equals("8,0")){
      digitalWrite(foco8,0);
      BT.println("Apagado");
    }
    
  }
}
