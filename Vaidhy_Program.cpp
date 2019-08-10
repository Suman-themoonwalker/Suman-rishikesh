// A C program to print either the value is weird or not



#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%2!=0)
		printf("\nWeird");
	else{
	 if(n>=2 && n<6)
		printf("\nNot Weird");
	 else if(n>=6 && n<=20)
	 	printf("\nWeird");
	 else if(n>20)
	 	printf("\nNot Weird");
   } 
   return 0;	
}
