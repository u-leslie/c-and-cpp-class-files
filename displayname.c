#include <stdio.h>
#include <string.h>
int main(){
	char fname[100],lname[50];
	printf("Enter first name : ");
	gets(fname);// read string
	printf("Enter last name : ");
	gets(lname);
	puts(fname);//display string
	puts(lname);
	printf("\n your names are :  %s ",lname,fname);
	printf("\n");
	printf("\n the number of characters are  %ld",strlen(fname));
	printf("%s is copied into %s",lname,fname,strcpy(lname,fname));
    return 0;
//gets return all names eventhough there may be a space , it is more effective
}
