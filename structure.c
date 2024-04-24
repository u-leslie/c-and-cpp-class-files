#include <stdio.h>
#include<string.h>

struct Person{
	int cityNo;
	int age;
	char name[100];
	char nationality[100];
	char gender[100];
	
};
int main(){
	struct Person p1,p2;
	
	printf("Enter Person's one Info\n");
		printf("____________________");
	printf("\ncityNo:\n");
	scanf("%d",&p1.cityNo);
		printf("age:\n");
	scanf("%d",&p1.age);
		printf("name:\n");
	scanf("%s",&p1.name);
		printf("nationality:\n");
	scanf("%s",&p1.nationality);
		printf("gender:\n");
	scanf("%s",&p1.gender);
	
	
	
	
		printf("Enter Person 2 Info\n");
			printf("____________________");
	printf("cityNo:\n");
	scanf("%d",&p2.cityNo);
		printf("age:\n");
	scanf("%d",&p2.age);
		printf("name:\n");
	scanf("%s",&p2.name);
		printf("nationality:\n");
	scanf("%s",&p2.nationality);
		printf("gender:\n");
	scanf("%s",&p2.gender);
	
	printf("p1CityNo is %d\n p1 age is %d\n p1 name %s\n p1 nationality is %s\n p1 gender is %s\n",p1.cityNo,p1.age,p1.name,p1.nationality,p1.gender);
	printf("_____________________________________________________________________________");
		printf("p2CityNo is %d\n p2 age is %d\n p2 name %s\n p2 nationality is %s\n p2 gender is %s\n",p2.cityNo,p2.age,p2.name,p2.nationality,p2.gender);
			printf("_____________________________________________________________________________");
}
