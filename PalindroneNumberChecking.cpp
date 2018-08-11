#include<stdio.h>
#include<conio.h>

 int main()
 {
 	 int a,b,sum=0,num;
 	 
 	 printf("please enter 2 or 3 digit number = ");
 	 scanf("%d",&a);
 	 
 	 num=a;
 	 
 	 while(a>0)
 	 {
 	 	 b= a%10;
 	 	 sum= sum*10 + b ;
 	 	 a= a/10;
	  }
	  
	 printf("\n\nThe value of sum is = %d",sum);
	 
	  if(sum==num)
	  {
	  	 printf("\n\nEntered Number is a PALINDRONE");
	  }
	  else
	  {
	  	 printf("\n\nEntered number is not a PALINDRONE");
	  }
 }
