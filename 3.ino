const byte NUM=8;
const byte led[]={2,3,4,5,7,8,9,10};
const byte SW=6;
const int delaytime=100;
int i;
void setup() {
 for(i=0;i<NUM;i++)
 { pinMode(led[i],OUTPUT);
   pinMode(SW,INPUT);
 }
}
void loop() {

boolean val = digitalRead(6);

if(val){
//on
digitalWrite(led[4],HIGH);


//自訂
 //全亮
 for(i=0;i<NUM;i++)
 {
 digitalWrite(led[i],HIGH);
 

 }
delay(delaytime);

 //全滅
 for(i=NUM-1;i>=0;i--)
 {


 digitalWrite(led[i],LOW);


 }
delay(delaytime);
 //全亮
  for(i=0;i<NUM;i++)
 {
 digitalWrite(led[i],HIGH);
  

 }
delay(delaytime);
 //全滅
 for(i=NUM-1;i>=0;i--)
 {


 digitalWrite(led[i],LOW);
 

 }

delay(delaytime);
//左

 for(i=0;i<NUM;i++)
 {
 digitalWrite(led[i],HIGH);
 delay(delaytime);
 digitalWrite(led[i],LOW);
 
 }



 //全亮
 for(i=0;i<NUM;i++)
 {
 digitalWrite(led[i],HIGH);


 }
delay(delaytime);
 //全滅
 for(i=NUM-1;i>=0;i--)
 {


 digitalWrite(led[i],LOW);


 }
delay(delaytime);
 //全亮
  for(i=0;i<NUM;i++)
 {
 digitalWrite(led[i],HIGH);
  

 }
delay(delaytime);
 //全滅
 for(i=NUM-1;i>=0;i--)
 {


 digitalWrite(led[i],LOW);
 

 }

//右
 for(i=8;i>0;i--)
 {
 digitalWrite(led[i],HIGH);
 delay(delaytime);
 digitalWrite(led[i],LOW);
 
 }

 


}

else{

//off
digitalWrite(led[4],LOW);


//左

 for(i=0;i<NUM;i++)
 {
 digitalWrite(led[i],HIGH);
 delay(delaytime);
 digitalWrite(led[i],LOW);
 
 }

delay(delaytime);

 
//右
 for(i=NUM;i>0;i--)
 {
 digitalWrite(led[i],HIGH);
 delay(delaytime);
 digitalWrite(led[i],LOW);
 
 }



}

}
