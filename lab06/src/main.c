int main()
{
	int input = 3415;	//variable for input
	int numArray[5] = {'\0'};	//array to store numbers
	int num_pos = 4;	//variable for number position in array
	char output[6][15] = {}; //array with output
	char words[6][10][20] = {	//array with words(numbers)
{},
{"", "one thousand ", "two thousands ", "three thousands ", "four thousands ", "five thousands ", "six thousands ", "seven thousands ", "eight thousands ", "nine thousands "},
{"", "one hundred ", "two hundreds ", "three hundreds ", "four hundreds ", "five hundreds ", "six hundreds ", "seven hundreds ", "eight hundreds ", "nine hundreds "},
{"", "ten ", "twenty ", "thirty ", "fourty ", "fifty ", "sixty ", "seventy ", "eighty", "ninety"},
{"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine"},
{"", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "}
};
				while (input != 0) {		//cycle to put each number in correct position in numArray
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
	return 0;
}
