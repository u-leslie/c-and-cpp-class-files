#include <stdio.h>
union item {
	int a;
	char ch;
};
int main(){
	union item it;
	it.a=12;
	printf("a:%d\n",it.a);
	it.ch ='z';
	printf("c:%c\n",it.ch);
	//checking for corruption in memory
	printf("a:%d\n,it.a");
	printf("c:%c\n,it.ch") 
	printf("Size of this union :%d\n", sizeof(it));
	return 0;
	
}
