#include<stdio.h>
#include <stdlib.h>
struct Car{
	char color;
	int numbeOfSits,numberOfTyres;
	float price;
};
void main(){
	int n,i;
	struct Car*ptr;
	printf("Enter number of cars :");
	scanf("%d",&n);
	ptr = (struct Car*) malloc(n * sizeof(struct Car));
	if(ptr == NULL){
		printf("Error! memory not allocated");
		exit(0);
	}
	for(i=0;i<n;i++){
		prinft("Enter the values for each car respectively:");
		scanf("%s%d%d%f",&(ptr+i)->color,&(ptr+i)->numberOfSits,&(ptr+i)->numberOfTyres,&(ptr+i)->price);
	}
	printf("Displaying Data:\n");
	for(i=0;i<n;++i)
	printf("Colors:%s\nnumberOfSits:%d\nnumberOfTyres:%d\nprice:%f",(ptr+i)->color,(ptr+i)->numberOfSits,(ptr+i)->numberOfTyres,(ptr+i)->price));
	free(ptr);
}
