#include <stdio.h>
int main()
{
	float radius = 0;		//set a radius variable
	float l, s, v;		//set commands
	float pi = 3.14f;		//pi number
	char input;			//used for command
		printf("\n write a radius \n");
			scanf("%f", &radius);		//asking to write value
				l = 2 * pi * radius;		//calculates
				s = pi * (radius * radius);
				v = (4 / 3) * pi * (radius * radius * radius);
		printf("\n write a command \n");
			scanf(" %c", &input);		//asking to wrtite a command
	if (input == 'l') {			//if function to understand which command was written and print a result
		printf("\n l = %.0f \n", l);
			}	else if (input == 's')	{
		printf("\n s = %.0f \n", s);
			}	else if (input == 'v')	{
		printf("\n v = %.0f \n", v);
		}

	return 0;
}
