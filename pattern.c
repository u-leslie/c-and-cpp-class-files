#include<stdio.h>
//printing pattern numbers
//int main(){
//	int r,c;
//	for(r=1;r<=5;r++){
//		for(c=1;c<=r;c++){
//			printf("%d",c);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main(){
//	int r,c;
//	for(r=5;r>=1;r--){
//		for(c=1;c<=r;c++){
//			printf("%d",c);
//		}
//		printf("\n");
//	}
//	return 0;
//}


int main(){
	int r,c;
	for(r=1;r<=5;r++){
		for(c=0;c<r;c++){
			printf("*");
		}
		printf("\n");
	}
	
	for(r=0;r>=5;r--){
		for(c=1;c>r;c--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



