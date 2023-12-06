#include <stdio.h>
int main()
{
	int number_one; //variables for number input
	int number_two;
	int NSD; //variable to print result
		printf ("\n введіть перше число \n");
			scanf("%i", &number_one);		//waiting for the first input
		printf ("\n введіть друге число \n");
			scanf("%i", &number_two);		//waiting for the second input
			while (number_one != number_two) {		//while loop
				if (number_one > number_two) {		//using euclid's algorithm
						number_one = number_one - number_two;
}
				else {
						number_two = number_two - number_one;
}
}
			NSD = number_one; //final value
		printf("\n НСД = %i \n", NSD); //print result
	return 0;
}
