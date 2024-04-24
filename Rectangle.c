#include<stdio.h>
int main(){
	int length=0,width=0,perimeter=0,area=0;
	printf("Enter the length :");
	scanf("%d",&length);
	printf("Enter the width :");
	scanf("%d",&width);
    area=length*width;
    printf ("area=%d",area);
	perimeter=length+width+length+width;
    printf ("perimeter:%d",perimeter);
	return 0;

}
