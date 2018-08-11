#include<stdio.h>
#include<conio.h>

 int main()
 { 
   int a=0,hour,i=1,refHour=40,x;
   
 // printf("\n\n\nPlease Enter Working Hour of an EMPLOYE = ");
   //           scanf("%d",&hour);
   
   //if(hour>40)
   //{
   	  while(i<=10)
   	  {
   	  	a++;
   	  	printf("\n\n\n\n\n please enter Working Hour of %d Employee = ",a);
   	  	scanf("%d",&hour);
   	  	
   	  	 if(hour>40)
   	  	 {
			int OverTimeHour=hour-refHour;
   	  	  //printf("\n\nEnter Employee ID number = ");
   	  	  //scanf("%d\n",&x);
   	  	  printf("\n\n OverTime of Employee %d is paid = Rs %d",a,OverTimeHour*12);
		 }
		 
		 else
		 {
		 	printf("\n\n Sorry Employee %d you are not Eligible ",a);
		 	
		 }
		 
		 if(a==10)
		 {
		 	break;
		 }
		 
	}
   //}
   //else
   //printf("\n\n\nEntered HOUR is less than REQUIRED over TIme HOUR");
   
 
 }
