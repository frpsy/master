#include <stdio.h>
/// @brief test function
/// @param  void
/// @return result of function
int testfunction(void){
	int i = 1;
	printf("this is a number: %d\n", i);
	return 0;
}
/// @brief main
/// @param void
/// @return void
int main(void)
{
	for (int i = 1; i < 5; i++){
			printf("this is cal\n");
	}
	testfunction();
	return 0;
}