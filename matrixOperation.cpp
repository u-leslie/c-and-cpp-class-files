#include <stdio.h>
int main(){
	int mA[3][3],mB[3][3],m[3][3];
	int i,j,k;
	int r,c,r2,c2;
	
	printf("Enter the number of rows:\n");
	scanf("%d",&r);
	
		printf("Enter the number of columns:\n");
	scanf("%d",&c);
			printf("enter values of matrix 1:\n");
	for (i=0;i<=r;i++){
		
		for(j=0;j<=c;j++){
			scanf("%d",&mA[i][j]);
		}
			printf("\n");
	}

	printf("Enter the number of rows of 2:\n");
	scanf("%d",&r2);
	
		printf("Enter the number of columns of 2:\n");
	scanf("%d",&c2);
	printf("enter values of matrix 2:\n");
	for (i=0;i<=r2;i++){
		for(j=0;j<=c2;j++){
			scanf("%d",&mB[i][j]);
		}
			printf("\n");
	}
		if(r==r2&& c==c2){
		printf("The sum is:\n");
	

	for (i=0;i<=r;i++){
		for(j=0;j<=c;j++){
			
			printf("%4d",mA[i][j]+mB[i][j]);
		
		}
		printf("\n");
	}
	}else printf("Cant't be added\n");
	
	if(c==r2){
			printf("The product is:\n");
	
		for (i=0;i<=r;i++){
		for(j=0;j<=c;j++){
		m[i][j]=0;
		
		for(k=0;k<=c;k++){
			m[i][j]+=mA[i][k]*mB[k][j];
	}
	printf("%2d  ",m[i][j]);
	}
	printf("\n");
}
	}else  printf("Cant't be multiplied");


	return 0;

}
