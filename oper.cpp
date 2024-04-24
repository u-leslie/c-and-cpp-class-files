#include <stdio.h>
int main(){
	int i=0;

printf("i before post++:%d\n",(i++));//0
printf("i after post++:%d\n",i);//1
///////////
printf("i before pre++:%d\n",(++i));//2
printf("i after pre++ :%d\n",i);//2

int a=10;
int b=9;
printf("%d\n",~b);
printf("%d\n",a<<5);
printf("%d\n",a>>5);
//prinf("%d\n",~a);
}

