#include <stdio.h>
int main()
{
	int first = 0;		//first number used fir thousands
	int second = 0;		//second number used for hundreds
	int third_tens = 0;		//third number used for tens array
	int third_doubles = 0;		//third number used for doubles array
	int fourth = 0;			//fourth number used for single array
	int remain_for_doubles;		//ostacha for doubles
	int remain;			//ostacha
	int input;			//to store inputed number
	char *single[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};		//pointer to the array for one digit numbers
	char *doubles[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};	//pointer to array with numbers from 11 to 19
	char *tens[] = {"", "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"}; 		//pointer to array for tens
		printf("Введіть число до 10000 \n");	//asking to write a number
		scanf("%i", &input);		//receiving number inputed
			if (input == 0) {		//if function for zero
				printf("zero");
}	else if (input > 9999)	{ 		//if number bigger than 9999
				printf("надто велике число \n");
				return(0);
}

	if (input >= 1000)	{		//if and while cycle for numbers higher than 1000 
			while (input > 0) {
				remain = input % 10;		//looking for remain to find position of number in array
				remain_for_doubles = input % 100;		//another remain to find if there is a double-digit number(11,12,13...)
					if (remain_for_doubles >=11 && remain_for_doubles <=19 && input >= 1000) {
						third_doubles = remain;
						input = input/10;
				}	else if (input <= 9999 && input >= 1001)	{
						fourth = remain;
				}	else if (input <= 999 && input >= 101)	{
						third_tens = remain;
				}	else if (input <= 99 && input >= 11)	{
						second = remain;
				}	else if (input <= 9 && input >= 1)	{
						first = remain;
}
				input = input/10;		//after that cycle we have 4 variables with positions of numbers in array but they are going from right to left so we want to reverse their position later
}
}	else if (input >= 100)	{			//another cycle for number less than 1000 and more than 100
			while (input > 0) {
				remain = input % 10;
				remain_for_doubles = input % 100;
					if (remain_for_doubles >=11 && remain_for_doubles <=19 && input >= 100) {
						third_doubles = remain;
						input = input/10;
				}	else if (input <= 999 && input >= 101)	{
						fourth = remain;
				}	else if (input <= 99 && input >= 11)	{
						third_tens = remain;
				}	else if (input <= 9 && input >= 1)	{
						second = remain;
}
				input = input/10;
}		//3 variables because we dont need thousands here
}	else if (input >= 10)	{		//cycle for double-digit numbers
			while (input > 0) {
				remain = input % 10;
				remain_for_doubles = input % 100;
					if (remain_for_doubles >=11 && remain_for_doubles <=19 && input >= 10) {
						third_doubles = remain;
						input = input/10;
				}	else if (input <= 99 && input >= 11)	{
						fourth = remain;
				}	else if (input <= 9 && input >= 1)	{
						third_tens = remain;
}
				input = input/10;
}		//two variables because we dont need hundreds
}	else	{	while (input > 0) {		//cycle for 1 digit numbers
				remain = input % 10;
						if (input <= 9)	{
						fourth = remain;
}
				input = input/10;
}
}

		//now we want our number to be spelled right so we using if with print f to make "1 thousandS" into "1 thousand" and same with hundreds

		//and also here we reversing numbers to make correct spelling like: first, second, third, fourth - thousands, hundreds, tens, ones
				if (first > 1 && second == 0) {
						printf("%s thousands %s%s %s%s \n", single[first], single[second], tens[third_tens], doubles[third_doubles], single[fourth]);
				}	else if	(first == 1 && second == 1) {
						printf("%s thousand %s hundred %s %s %s \n", single[first], single[second], tens[third_tens], doubles[third_doubles], single[fourth]);
}					else if	(first == 1 && second == 0) {
						printf("%s thousand %s%s %s%s \n", single[first], single[second], tens[third_tens], doubles[third_doubles], single[fourth]);
}					else if	(first > 1 && second == 1) {
						printf("%s thousands %s hundred %s %s %s \n", single[first], single[second], tens[third_tens], doubles[third_doubles], single[fourth]);
}					else if	(first == 0 && second == 1) {
						printf("%s %s hundred %s %s %s \n", single[first], single[second], tens[third_tens], doubles[third_doubles], single[fourth]);
}					else if	(first == 0 && second > 1) {
						printf("%s %s hundreds %s %s %s \n", single[first], single[second], tens[third_tens], doubles[third_doubles], single[fourth]);
}					else if	(first == 0 && second == 0) {
						printf("%s %s %s %s %s \n", single[first], single[second], tens[third_tens], doubles[third_doubles], single[fourth]);
}	else	{
						printf("%s thousands %s hundreds %s %s %s \n", single[first], single[second], tens[third_tens], doubles[third_doubles], single[fourth]);
}

	return 0;
}
