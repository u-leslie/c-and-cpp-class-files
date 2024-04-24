#include<stdio.h>
int min(int num1,int num2,int num3){
	if((num1<num2 )&&(num1<num3)){
		printf("num: %d",num1); 
}


	else if ((num2<num1)&&(num2<num3))
		printf("num : %d",num2); 
	else{
		printf("num : %d",num3);
}
 
}

int main(){
	int minimum,num1,num2,num3;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	printf("enter num3:");
	scanf("%d",&num3);
	min(num1,num2,num3);
	return 0;
	
}
