int main()
{
	int number_one = 244; //variables for numbers
	int number_two = 642;
			while (number_one != number_two) {		//while loop
				if (number_one > number_two) {		//using euclid's algorithm
						number_one = number_one - number_two;
}
				else {
						number_two = number_two - number_one;
}
}
			int NSD = number_one; //final value
	return 0;
}
