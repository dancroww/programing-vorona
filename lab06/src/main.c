#include <stdio.h>
int main()
{
	int input; //variable for input
	int numArray[5] = {'\0'};	//array to store numbers
	int num_pos = 4;	//variable for number position in array
	char *single[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};		//pointer to the array for one digit numbers
	char *doubles[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};	//pointer to array with numbers from 11 to 19
	char *tens[] = {"", "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"}; 		//pointer to array for tens
		
		printf("Введіть число до 10000 \n");	//asking to write a number
		scanf("%d", &input);		//receiving number inputed		
			if (input == 0) {		//if function for zero
				printf("zero");
}	else if (input > 9999)	{ 		//if number bigger than 9999
				printf("надто велике число \n");
				return(0);
}
				

				while (input != 0) {		//cycle to put each number in correct position in array
					numArray[num_pos] = input % 10;
					input /= 10;	
					num_pos--;
}


				if (numArray[1] == 1) {			//result output
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

	return 0;
}
