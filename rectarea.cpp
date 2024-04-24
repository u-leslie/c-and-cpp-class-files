#include <stdio.h>
int rectangleArea(int a,int b){
	return a*b;
}
int main(){
	int length,width,area;
	printf("Enter the length");
	scanf("%d",&length);
	printf("Enter the width");
	scanf("%d",&width);
	area=rectangleArea(length,width);
	printf("the calculated area is %d",area);
	return 0;

}
