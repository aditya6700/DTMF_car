#define D0 19
#define D1 18
#define D2 17
#define D3 16


int p1 =7;
int m1 =8;
int p2 =9;
int m2 =10;



void setup()
{
  // put your setup code here, to run once:
pinMode(p1,OUTPUT);
pinMode(m1,OUTPUT);
pinMode(p2,OUTPUT);
pinMode(m2,OUTPUT);

pinMode(D0,INPUT);
pinMode(D1,INPUT);
pinMode(D2,INPUT);
pinMode(D3,INPUT);
//Serial.begin(9600);

}

void fwd()
{
    // forward
digitalWrite(p1,HIGH);
digitalWrite(m1,LOW);
digitalWrite(p2,HIGH);
digitalWrite(m2,LOW);
}

void rev()
{
 // reverse
digitalWrite(m1,HIGH);
digitalWrite(p1,LOW);
digitalWrite(m2,HIGH);
digitalWrite(p2,LOW); 
}

void rih()
{
 // right
digitalWrite(p1,LOW);
digitalWrite(m1,HIGH);
digitalWrite(p2,HIGH);
digitalWrite(m2,LOW); 
}

void lef()
{
  // left
digitalWrite(p1,HIGH);
digitalWrite(m1,LOW);
digitalWrite(p2,LOW);
digitalWrite(m2,HIGH);
}

void st0p()
{
digitalWrite(p1,HIGH);
digitalWrite(m1,HIGH);
digitalWrite(p2,HIGH);
digitalWrite(m2,HIGH); 
}


void loop()
{

     int temp1=digitalRead(D0);
     int temp2=digitalRead(D1);
     int temp3=digitalRead(D2);
     int temp4=digitalRead(D3);


    if(temp1==0 && temp2==1 && temp3==0 && temp4==0)
       fwd();
    else if(temp1==0 && temp2==0 && temp3==1 && temp4==0)
       lef();
    else if(temp1==0 && temp2==1 && temp3==1 && temp4==0)
       rih();
    else if(temp1==0 && temp2==0 && temp3==0 && temp4==1)
       rev();
    else if(temp1==1 && temp2==0 && temp3==1 && temp4==0)
       st0p();

s}
