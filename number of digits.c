#include <stdio.h>
int main(){
	int num,sum,dig;
	dig=0;
	sum;
	printf("enter a numeber Raissa:");
	scanf("%d",&num);
	// we use do while so that it can read 0 as a digit 
	do{
		sum=sum+(num%10);
		num=num/10;
		dig++;
	}while(num!=0);
	// we don't use while only because if you enter 0 the number of digits will while it is incorrect.try it yourself.
//while(num!=0){
//	sum=sum+(num%10);
//	num=num/10;	
//		dig++;
//	
//}
	printf("the sum of digits is %d",sum);
	printf("\nthe number of digits is %d ",dig);
return 0;
}
