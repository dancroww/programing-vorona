#include <stdio.h>
/**
*Дві функції для перетворення чисел в слова та знаходження НСД
*/
void num_in_words (int input, int num_pos); 
void NSD_function (int number_one, int number_two, int NSD); 
/**
*Три масиви з назвами чисел та один з самими числами
*/
	char *single[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; 
	char *doubles[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char *tens[] = {"", "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	int numArray[5] = {'\0'}; 

int main()
{
	srand(time(NULL));	
	int function;
	printf("Якщо хочете перетворити число в слова натисніть 1\nЯкщо хочете знайти НСД натисніть 2\n");
	scanf("%d", &function);
		if (function == 1) {	/**Якщо вибрано певну дію, викликаємо потрібну функцію і задаємо рандомні значення*/
			num_in_words(0 + random() % (9999 - 0 + 1),4);
}	else if (function == 2) {
			NSD_function(0 + random() % (9999 - 0 + 1), 0 + random() % (9999 - 0 + 1), 0); 
}


	return 0;
}

	void num_in_words (int input, int num_pos) /**Перша функція*/
{
	num_pos = 4; /**Змінна для позиції числа в масиві*/
		
			if (input == 0) {		/**Якщо введені дані 0 або більше 9999, завершити роботу*/
				printf("zero");
}	else if (input > 9999)	{ 		
				printf("надто велике число \n");
				return;
}
				

				while (input != 0) {	/**Цикл в якому число ділиться на 10, а частка від цього ділення являє собою число яке піде в масив*/
					numArray[num_pos] = input % 10;
					input /= 10;	
					num_pos--;
}


				if (numArray[1] == 1) {		/**вивід значень та приставок на екран*/
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


	void NSD_function (int number_one, int number_two, int NSD) /**Друга функція*/
{
			while (number_one != number_two) {		/**цикл, який використовує метод евкліда*/
				if (number_one > number_two) {		
						number_one = number_one - number_two;
}
				else {
						number_two = number_two - number_one;
}
}
			NSD = number_one; /**кінцеве значення*/
		printf("\n НСД = %i \n", NSD); /**вивід результату на екран*/
	return;
}
