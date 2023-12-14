int main()
{
	float l, s, v;
	int radius = 40;		//radius variable
	float pi = 3.14f;		//pi number
	char command = 'l';
		switch (command)	//rozgaluzhennya
{
			case 'l':		
				l = 2 * pi * radius;
				break;
			case 's':
				s = pi * (radius * radius);
				break;
			case 'v':
				v = (4 / 3) * pi * (radius * radius * radius);
				break;
}
	return 0;
}
