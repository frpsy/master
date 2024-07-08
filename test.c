#include <stdio.h>

int testfunction(void){
	int i = 1;
	for (int i =1; i <10; i++)
        printf("this is a number: %d\n", i);
	return 0;
}

int main(void)
{
	testfunction();
	return 0;
}
