#include<stdio.h>
int area(int a,int b){
	return a*b;
}
int (*areaPtr)(int,int);
int main(){
	int a,b,result;
	areaPtr=area;
	printf("Enter the 2 rectangle sides: ");
	scanf("%d%d",&a,&b);
	result=areaPtr(a,b);
	printf("The result is %d",result);
	return *areaPtr;
	
}

