#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char bit;
	unsigned int i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int main()
{
	unsigned char octet = 2;
	printf("%d\n", octet);
	print_bits(octet);
	printf("\n");
}