#include <stdio.h>
void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*
	b=temp;
}
int main(){
	int b=5;
	int c=10;
	swap(&b,&c);
	printf("%d",b);
	printf("%d",c);
	return 0;
}
