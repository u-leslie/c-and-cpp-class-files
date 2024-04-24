#include <stdio.h>
int main(){
	int a[5]={1,5,0,3,6};
	printf("\n%u\n"&a[0]);
	return 0;
}
for(i=1;i<5;i++){
	printf("%u\n",&a[i]);
}
