#include <stdio.h>		//founnd and learned it when i tried to print sum
int main()
{
	int sum = 0;		//variable for operation's result 
	int min_num = 40;		//first minimal number
	int max_num = 45;		// second maximal number
	for (int i = min_num; i <= max_num; i++) {		//cycle where each next number bigger than previous by 1, starting from minimal number
		sum = sum + i;		//sum all numbers into one
	}
	printf ("\n sum = %d", sum);		//print result
	return 0;
}
