#include<stdio.h>
#include<conio.h>
int sum_digits(int);
int reverse(int);

 int main()
 {
    int a;
	printf("Enter any number  = ");
	scanf("%d",&a);
	int c = sum_digits(a);
	int d = reverse(c);
	
	if(c*d==a)
	{
		 printf("IT is a magial number");
		 } 	
		 else
		 printf("not a magical number");
 }
 
 int sum_digits(int x)
 {
 	int sum = 0;
 	
 	while(x>0)
 	{
 		 sum = sum + x%10;
 		 x=x/10;
	 }
	 return sum;
 }
 
 int reverse(int y)
 {
 	 int j=0;
 	 while(y>0)
 	 {
	  
 	 j=j*10 + y%10;
 	 y=y/10;
 }
 return j;
 }
