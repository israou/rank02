#include <libc.h>

unsigned char	reverse_bit(unsigned char octet)
{
	unsigned char res = 0;
	unsigned int i = 8;
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (res);
}