#include <stdio.h>
int main(){
		int n,i;
	printf("Enter a number  : ");
	scanf("%d",&n);
	if(n<2){
    printf("Nope"); 
	}
	else if (n==2||n==3){
		printf ("Nope");
	}
	else if (n%2==0){
		printf("Nope");
	}
	for (i=3;i<sqrt(n);i++){
		if(n%i==0){
			printf("is a prime number");	
		}
	else{
		printf("Is not a prime number");
	}
	}
	return 0;
}
 
