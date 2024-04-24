#include <stdio.h>
int main(){
	int A[3][3]={
	{1,0,2},
	{2,3,2},
	{5,4,3}
	};
	int B[3][3]={
	{1,0,2},
	{2,3,2},
	{2,5,3}
	
	};
	int r,c;
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("%d",A[r][c] +B[r][c]);
		}
		printf("\n");
	}
	return 0;
}
