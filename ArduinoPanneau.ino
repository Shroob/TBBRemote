 int A=22;

int B=24;

int C=26;

int D=28;

int E=30;

int F=32;

int G=34;

 

int L1=2;

int L2=3;

int L3=4;

int L4=5;

int L5=6;

int L6=7;

int L7=8;

int L8=9;

int L9=10;

int L10=11;

 

 

int Y1=0;

int Y2=0;

int Y3=1;

 

boolean b= false;

 

void setup(){

Serial.begin(9600);

pinMode(A,OUTPUT);

pinMode(B,OUTPUT);

pinMode(C,OUTPUT);

pinMode(D,OUTPUT);

pinMode(E,OUTPUT);

pinMode(F,OUTPUT);

pinMode(G,OUTPUT);

  

pinMode(L1,OUTPUT);

pinMode(L2,OUTPUT);

pinMode(L3,OUTPUT);

pinMode(L4,OUTPUT);

pinMode(L5,OUTPUT);

pinMode(L6,OUTPUT);

pinMode(L7,OUTPUT);

pinMode(L8,OUTPUT);

pinMode(L9,OUTPUT);

pinMode(L10,OUTPUT);

}

 

void loop(){

boolean b= false;

Y1=0;

Y2=0;

    

digitalWrite(L1,HIGH);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(0);

  

delay(2);

digitalWrite(L2,HIGH);

digitalWrite(L1,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(0);

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,HIGH);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(0);

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,HIGH);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(0);

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,HIGH);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(0);

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,HIGH);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(0);

delay(2);

    

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,HIGH);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(0);

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,HIGH);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(0);

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,HIGH);

digitalWrite(L10,LOW);

disp(0);

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,HIGH);

disp(0);

delay(2);

    

if (Serial.available() > 0){

    

if (Serial.read()=='a'){

  

for(int p=0;p<=45;p++){

for(int d=0;d<60;d++){

    

for(int a=0;a<50;a++){

digitalWrite(L1,HIGH);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(getTen(d));

  

delay(2);

digitalWrite(L2,HIGH);

digitalWrite(L1,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(getUnit(d));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,HIGH);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(getUnit(p));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,HIGH);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(getTen(p));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,HIGH);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

if (Serial.read()=='b'){Y1++;}

if (Serial.read()=='c'){Y1--;}

disp(getUnit(Y1));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,HIGH);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(getTen(Y1));

delay(2);

    

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,HIGH);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

if (Serial.read()=='d') {Y2++;}

if (Serial.read()=='e') {Y2--;}

disp(getUnit(Y2));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,HIGH);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(getTen(Y2));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,HIGH);

digitalWrite(L10,LOW);

disp(getUnit(Y3));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,HIGH);

disp(getTen(Y3));

delay(2);

    

if (Serial.read()=='f'){b=true; break;}

}

if(b==true)

break;}

if(b==true)

break;

}}

    

if ((Serial.read()=='a')&&(b=false)){

Y3=2;

for(int p=0;p<=45;p++){

for(int d=0;d<60;d++){

    

for(int a=0;a<50;a++){

digitalWrite(L1,HIGH);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(getTen(d));

  

delay(2);

digitalWrite(L2,HIGH);

digitalWrite(L1,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(getUnit(d));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,HIGH);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(getUnit(p));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,HIGH);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(getTen(p));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,HIGH);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

if (Serial.read()=='b'){Y1++;}

if (Serial.read()=='c'){Y1--;}

disp(getUnit(Y1));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,HIGH);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(getTen(Y1));

delay(2);

    

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,HIGH);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

if (Serial.read()=='d') {Y2++;}

if (Serial.read()=='e') {Y2--;}

disp(getUnit(Y2));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,HIGH);

digitalWrite(L9,LOW);

digitalWrite(L10,LOW);

disp(getTen(Y2));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,HIGH);

digitalWrite(L10,LOW);

disp(getUnit(Y3));

delay(2);

    

digitalWrite(L1,LOW);

digitalWrite(L2,LOW);

digitalWrite(L3,LOW);

digitalWrite(L4,LOW);

digitalWrite(L5,LOW);

digitalWrite(L6,LOW);

digitalWrite(L7,LOW);

digitalWrite(L8,LOW);

digitalWrite(L9,LOW);

digitalWrite(L10,HIGH);

disp(getTen(Y3));

delay(2);

if (Serial.read()=='f'){b=true;break;}

}

if(b==true)

break;

}

if(b==true)

break;

}}

    

    

    

}

}

 

void doubleDisp(int i){

  

while(true){

digitalWrite(L1,HIGH);

digitalWrite(L2,LOW);

disp(getTen(i));

  

delay(10);

digitalWrite(L2,HIGH);

digitalWrite(L1,LOW);

disp(getUnit(i));

delay(10);

}

}

 

int getTen(int i){

int u=i;

int c=0;

while(u>=10){

u=u-10;

c++;

}

return c;

}

 

int getUnit(int i){

int u=i;

int c=0;

while(u>=10){

u=u-10;

c++;

}

return u;

}

 

 

void chrono(){

 

for(int d=0;d<=60;d++){

    

for(int a=0;a<50;a++){

digitalWrite(L1,HIGH);

digitalWrite(L2,LOW);

disp(getTen(d));

  

delay(10);

digitalWrite(L2,HIGH);

digitalWrite(L1,LOW);

disp(getUnit(d));

delay(10);

}

    

    

    

}

}

 

void disp(int i){

switch(i){

case 0:

digitalWrite(A,LOW);

digitalWrite(B,LOW);

digitalWrite(C,LOW);

digitalWrite(D,LOW);

digitalWrite(E,LOW);

digitalWrite(F,LOW);

digitalWrite(G,HIGH);

break;

case 1:

digitalWrite(A,HIGH);

digitalWrite(B,LOW);

digitalWrite(C,LOW);

digitalWrite(D,HIGH);

digitalWrite(E,HIGH);

digitalWrite(F,HIGH);

digitalWrite(G,HIGH);

break;

case 2:

digitalWrite(A,LOW);

digitalWrite(B,LOW);

digitalWrite(C,HIGH);

digitalWrite(D,LOW);

digitalWrite(E,LOW);

digitalWrite(F,HIGH);

digitalWrite(G,LOW);

break;

case 3:

digitalWrite(A,LOW);

digitalWrite(B,LOW);

digitalWrite(C,LOW);

digitalWrite(D,LOW);

digitalWrite(E,HIGH);

digitalWrite(F,HIGH);

digitalWrite(G,LOW);

break;

case 4:

digitalWrite(A,HIGH);

digitalWrite(B,LOW);

digitalWrite(C,LOW);

digitalWrite(D,HIGH);

digitalWrite(E,HIGH);

digitalWrite(F,LOW);

digitalWrite(G,LOW);

break;

case 5:

digitalWrite(A,LOW);

digitalWrite(B,HIGH);

digitalWrite(C,LOW);

digitalWrite(D,LOW);

digitalWrite(E,HIGH);

digitalWrite(F,LOW);

digitalWrite(G,LOW);

break;

case 6:

digitalWrite(A,LOW);

digitalWrite(B,HIGH);

digitalWrite(C,LOW);

digitalWrite(D,LOW);

digitalWrite(E,LOW);

digitalWrite(F,LOW);

digitalWrite(G,LOW);

break;

case 7:

digitalWrite(A,LOW);

digitalWrite(B,LOW);

digitalWrite(C,LOW);

digitalWrite(D,HIGH);

digitalWrite(E,HIGH);

digitalWrite(F,HIGH);

digitalWrite(G,HIGH);

break;

case 8:

digitalWrite(A,LOW);

digitalWrite(B,LOW);

digitalWrite(C,LOW);

digitalWrite(D,LOW);

digitalWrite(E,LOW);

digitalWrite(F,LOW);

digitalWrite(G,LOW);

break;

case 9:

digitalWrite(A,LOW);

digitalWrite(B,LOW);

digitalWrite(C,LOW);

digitalWrite(D,LOW);

digitalWrite(E,HIGH);

digitalWrite(F,LOW);

digitalWrite(G,LOW);

break;

default:

digitalWrite(A,HIGH);

digitalWrite(B,HIGH);

digitalWrite(C,HIGH);

digitalWrite(D,HIGH);

digitalWrite(E,HIGH);

digitalWrite(F,HIGH);

digitalWrite(G,HIGH);

break;

}

}
