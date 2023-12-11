#include <stdio.h>
void num_in_words (int input); //number in words function
void NSD_function (int number_one, int number_two); //NSD function


int main()
{

srand(time(NULL));	//to generate random numbers

	int function = 2;	//to store input
		if (function == 1) {
			num_in_words(0 + random() % (9999 - 0 + 1));	//calling 1st function and giving random values
}	else if (function == 2) {
			NSD_function(0 + random() % (9999 - 0 + 1), 0 + random() % (9999 - 0 + 1)); //calling 2nd function and giving random values
}


	return (0);
}

	void num_in_words (int input) //first function
{
char output[6][15] = {};	//array with output
char words[6][10][20] = {	//array with words(numbers)
{},
{"", "one thousand ", "two thousands ", "three thousands ", "four thousands ", " five thousands ", " six thousands ", " seven thousands ", " eight thousands ", " nine thousands "},
{"", " one hundred ", " two hundreds ", " three hundreds ", " four hundreds ", " five hundreds ", " six hundreds ", "seven hundreds ", " eight hundreds ", "nine hundreds "},
{"", "ten ", "twenty ", "thirty ", "fourty ", " fifty ", "sixty ", " seventy ", "eighty", "ninety"},
{"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine"},
{"", "eleven ", "twelve ", "thirteen ", "fourteen ", " fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "}
};
int numArray[5] = {'\0'}; //number array for first function

	int num_pos = 4; //number position in array
				while (input != 0) {	//cycle to give each number position in array
					numArray[num_pos] = input % 10;
					input /= 10;	
					num_pos--;
}
			num_pos = 4; //setting back number position
			for (int j = 0; j < 4; j++) {		//cycle to extract 4 words from another array
				for (int i = 0; i < 15; i++) {	//cycle to extract letters from another array
					if (numArray[3] == 1 && j < 1) {	//if input has double-digit number
						num_pos = 5;
						output[num_pos][i] = words[num_pos][numArray[4]][i];
						num_pos = 3;
}	else	{	//basic input
						output[num_pos][i] = words[num_pos][numArray[num_pos]][i];
}
}
						num_pos--;
}
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 1; j++) {
	printf("%s", &output[i][j]);
}
}
}

	void NSD_function (int number_one, int number_two) //second function
{
			while (number_one != number_two) {		//while loop
				if (number_one > number_two) {		//using euclid's algorithm
						number_one = number_one - number_two;
}
				else {
						number_two = number_two - number_one;
}
}
			int NSD = number_one;	//final value
				printf("%d\n", NSD);
}
