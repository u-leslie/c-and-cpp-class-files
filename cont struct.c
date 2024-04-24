#include <stdio.h>
int main(){
	int n,lv=1;
	printf("Enter any integer\n");
	scanf("%d",&n);
	//while loop
	while(lv<=n){
		printf("%d",lv);
		lv+=1;
	}
return 0;	
}
