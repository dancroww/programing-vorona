#include <stdio.h>
void num_in_words (int input, int num_pos); //number in words function
void NSD_function (int number_one, int number_two, int NSD); //NSD function
	char *single[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; //pointer arrays
	char *doubles[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char *tens[] = {"", "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	int numArray[5] = {'\0'}; //number array for first function

int main()
{
	srand(time(NULL));	//to generate random numbers
	int function;	//to store input
	printf("Якщо хочете перетворити число в слова натисніть 1\nЯкщо хочете знайти НСД натисніть 2\n");
	scanf("%d", &function);
		if (function == 1) {
			num_in_words(0 + random() % (9999 - 0 + 1),4);	//calling 1st function and giving random values
}	else if (function == 2) {
			NSD_function(0 + random() % (9999 - 0 + 1), 0 + random() % (9999 - 0 + 1), 0); //calling 2nd function and fiving random values
}


	return 0;
}

	void num_in_words (int input, int num_pos) //first function
{
	num_pos = 4; //number position in array
		
			if (input == 0) {		//if function for zero
				printf("zero");
}	else if (input > 9999)	{ 		//if number bigger than 9999
				printf("надто велике число \n");
				return;
}
				

				while (input != 0) {	//cycle to give each number position in array
					numArray[num_pos] = input % 10;
					input /= 10;	
				printf("%d\n", numArray[num_pos]);
					num_pos--;
}


				if (numArray[1] == 1) {		//output
					printf(" %s thousend", single[numArray[1]]);
}	else if (numArray[1] > 1)	{
					printf(" %s thousends", single[numArray[1]]);
}
				if (numArray[2] == 1) {
					printf(" %s hundred", single[numArray[2]]);
}	else if (numArray[2] == 0)	{

}	else	{
					printf(" %s hundreds", single[numArray[2]]);
}
				if (numArray[3] == 1) {
					printf(" %s \n", doubles[numArray[4]]);
}	else if (numArray[3] == 0) {

}	else	{
					printf(" %s ", tens[numArray[3]]);
}
				if (numArray[4] >= 1 && numArray[3] != 1) {
					printf(" %s \n", single[numArray[4]]);
}
}


	void NSD_function (int number_one, int number_two, int NSD) //second function
{
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
	return;
}
