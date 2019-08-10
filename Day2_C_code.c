//C code for the sum of odd numbers

#include<stdio.h>
int main(){
int n,arr[n],i,sum=0;
printf("Enter the number of elements:");
scanf("%d",&n);
for(i=0;i<arr[n];i++){
	scanf("%d",&arr[i]);
	if (arr[i]%2!=0){
		sum+=arr[i];
	}
}
printf("The sum of odd numbers are: %d",sum);
return 0;
}
