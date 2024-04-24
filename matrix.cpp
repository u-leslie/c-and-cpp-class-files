
#include <stdio.h>
int main(){
const int r=3 ,c=2;
int A[r][c];
int B[r][c];
int i,j;
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("Element[%d][%d]:",i,j);
		scanf("%d",&A[i][j]);
		}
		
	}
	printf("Pending element of B /n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Element[%d][%d]",i,j);
			scanf("%d",&B[i][j]);
		}
	}
		//performing the sum
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d",A[i][j]+B[i][j]);
			}
			printf("\n");
		}
		

	return 0;
}
