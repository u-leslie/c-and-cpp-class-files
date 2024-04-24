#include <stdio.h>

struct A {
	int a;
	int *b;
	char c;
	char *d;
};
int main(){
	struct A a;
	printf("Size of struct A: %lu\n" , sizeof(struct A));
	printf("Size of object a: %lu\n", sizeof(a));
	return 0;
}


