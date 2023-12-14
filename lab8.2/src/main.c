#include <stdio.h>
/**
*функція для переведення чисел в слова
*/
void num_in_words (int input);
/**
функція для знаходження НСД
*/
void NSD_function (int number_one, int number_two);

int main()
{
/**
генерація рандомних чисел
*/
srand(time(NULL));

	int function = 1;	/**Якщо вибрано певну дію, викликаємо потрібну функцію і задаємо рандомні значення*/
		if (function == 1) {	/**виклик 1 функції*/
			num_in_words(0 + random() % (9999 - 0 + 1));
}	else if (function == 2) {	/**виклик 2 функції*/
			NSD_function(0 + random() % (9999 - 0 + 1), 0 + random() % (9999 - 0 + 1));
}


	return (0);
}

	void num_in_words (int input)	/**Перша функція*/
{
char output[6][20] = {};	/**масив з виводом значень*/
char words[6][10][20] = {	/**масив з назвами чисел*/
{},
{"", "one thousand ", "two thousands ", "three thousands ", "four thousands ", " five thousands ", " six thousands ", " seven thousands ", " eight thousands ", " nine thousands "},
{"", " one hundred ", " two hundreds ", " three hundreds ", " four hundreds ", " five hundreds ", " six hundreds ", "seven hundreds ", " eight hundreds ", "nine hundreds "},
{"", "ten ", "twenty ", "thirty ", "fourty ", " fifty ", "sixty ", " seventy ", "eighty", "ninety"},
{"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine"},
{"", "eleven ", "twelve ", "thirteen ", "fourteen ", " fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "}
};
int numArray[5] = {'\0'}; //number array for first function

	int num_pos = 4;	/**Змінна для позиції числа в масиві*/
				while (input != 0) {	/**Цикл в якому число ділиться на 10, а частка від цього ділення являє собою число, яке піде в масив*/
					numArray[num_pos] = input % 10;
					input /= 10;	
					num_pos--;
}
			num_pos = 4;	/**повертаємо позицію числа назад, в базове положення*/
			for (int j = 0; j < 4; j++) {	/**цикл, щоб передати номер слова в масиві зі словами*/
				for (int i = 0; i < 20; i++) {	/**цикл, щоб вивести побуквенно позначення цифри*/
					if (numArray[3] == 1 && j == 0) {	/**якщо введене значення має подвійне число 11,12,13*/
						num_pos = 5;
						output[num_pos][i] = words[num_pos][numArray[4]][i];
						num_pos = 3;
}	else	{	/**якщо ввід базовий*/
						output[num_pos][i] = words[num_pos][numArray[num_pos]][i];
}
}
						num_pos--;
}
		for (int i = 0; i < 6; i++) {	/**виведення буквенного значення на екран*/
		int j = 0;
	printf("%s", &output[i][j]);
}
	return;
}

	void NSD_function (int number_one, int number_two)	/**Друга функція*/
{
			while (number_one != number_two) {	/**цикл, який використовує метод евкліда*/
				if (number_one > number_two) {
						number_one = number_one - number_two;
}
				else {
						number_two = number_two - number_one;
}
}
			int NSD = number_one;	/**кінцеве значення*/
				printf("%d\n", NSD);	/**вивід результату на екран*/
	return;
}
