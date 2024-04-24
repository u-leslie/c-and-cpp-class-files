#include<stdio.h>
#include <stdlib.h>
struct Car{
	char color;
	int numberOfSits,numberOfTyres;
	float price;
};
void main(){
	int n,i;
	struct Car*ptr;
    struct Car* car1;
    struct Car* car2;
    // Dynamically allocate memory for car1
    car1 = (struct Car*)malloc(sizeof(struct Car));
    if (car1 == NULL) {
        printf("Memory allocation failed for car1\n");
        return 1;
    }
    // Dynamically allocate memory for car2
    car2 = (struct Car*)malloc(sizeof(struct Car));
    if (car2 == NULL) {
        printf("Memory allocation failed for car2\n");
        free(car1);
        return 1;
    }
	for(i=0;i<n;i++){
		printf("Enter the values for each car respectively: ");
		scanf("%s %d %d %f",&(ptr+i)->color, 
		&(ptr+i)->numberOfSits, 
		&(ptr+i)->numberOfTyres,
		&(ptr+i)->price);
	}
	printf("Displaying Data:\n");
	for(i=0;i<n;++i)
	printf("Colors:%s\n numberOfSits:%d\n numberOfTyres:%d\n price:%f",
	(ptr+i)->color,(ptr+i)->numberOfSits,(ptr+i)->numberOfTyres,(ptr+i)->price);
	free(ptr);
}
