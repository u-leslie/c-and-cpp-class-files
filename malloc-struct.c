#include <stdio.h>
#include<stdlib.h>
struct Room{
int doors,windows;
char wallColor[20]	;
};
void main(){
	int n,i;
	struct Room*ptr;
	printf("Enter the number of rows:");
	scanf("%",&n);
	ptr = (struct Room *)malloc(n*sizeof(struct Room));
	//if memory cannot be allocated 
	if(ptr==NULL){
		printf("Error!memory not allocated");
		exit (0);
	}
	//reading structure element
	for(i=0;i<n;i++){
		//reading the member structure among n structure at a time 
		printf("Enter the values for each row respectively: ");
		//accessing member of the first room :ptr->doors,ptr->windows and ptr->wallColor are used
        //accessing member of the second room :ptr->doors,ptr->windows and ptr->wallColor are used
    scanf("%d%d%s",&(ptr+i)->doors,&(ptr+i)->windows,(ptr+i)->wallColor);
}
printf("Displaying data:\n");
for(i=0;i<n;i++)
printf("Doors:%d\nWindows:%d\nColor%s\n",(ptr+i)->doors,(ptr+i)->windows,(ptr+i)->wallColor);
free(ptr);
}

