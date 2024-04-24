#include<stdio.h>
int max(int num1,int num2,int num3){
	if((num1>num2) && (num1>num3))
	printf("num:%d" ,num1);
	else if ((num2>num1)&& (num2>num3)) 
	printf("num:%d",num2);
	else {
	printf("num:%d",num3);
	}
	
}
int main(){
	int maximum,num1,num2,num3;
	printf("Enter number1:");
	scanf("%d",&num1);
	printf("Enter number2:");
	scanf("%d",&num2);
	printf("Enter number3:");
	scanf("%d",&num3);
	max(num1,num2,num3);
	return 0;
}
