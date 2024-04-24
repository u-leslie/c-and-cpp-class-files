#include <stdio.h>
int main(){
	int a =17, b=10,x;
	x=(b>a)?a:b;
	printf("%d\n",x);//10
	printf("%d\n",(x&a)&b);//0
	printf("%d\n",x<<2);//40
	printf("%d\n",x>>2);///2
	printf("%d\n",a^x);//27
	printf("%d\n",~(a+b+x));//-38
	return 0;
}
