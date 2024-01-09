#include <unistd.h>

void	writenumber(int number)
{
	if (number > 9)
		writenumber(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}
//"0123456789"[number % 10] cela accede au caractere a la position correspondante dans la chaine
int main()
{
	int number = 1;

	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		if (number % 3 == 0)
			write (1, "fizz", 4);
		if (number % 5 == 0)
			write(1, "buzz", 4);
		else
			writenumber(number);
		write(1, "\n", 1);
		number++;
	}
}