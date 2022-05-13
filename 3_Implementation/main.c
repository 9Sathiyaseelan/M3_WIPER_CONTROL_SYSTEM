#include<reg51.h>
 
sbit motorpin=P2^7;                         
sbit digital=P2^1;
sbit analog=P2^0;

void delay(int mulltiplier);

void main()
{
int i,k;	 
digital=1;                               
analog=1;                                  
motorpin=0;                                 
while(1)
{
		if(digital==0)                         
{		
		
		if(analog==1)	
		{ 

        k=125 ; }         
        
        else
		{  
         k=75  ;  }        
										
		for(i=0;i<k;i++)
	 {
		motorpin=1;
		delay(20);           
	  motorpin=0;
	 delay(380);          
		}
									 
   				 for(i=0;i<k;i++)
		 {
			 motorpin=1;
			 delay(40);         
		 motorpin=0;
		 delay(360);         
 }
 }	
		else             
			{
						motorpin=0;
									}
 }
 }
  
 void delay(int multiplier)          
{
 int i;
for(i=0;i<multiplier;i++)
{
 TMOD=0x20;         
 TH1=0xFF;
 TL1=0xCE;                 
 TR1=1;
 while(TF1==0);
 TF1=0;
 TR1=0;
 } 
 }
