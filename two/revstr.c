#include <libc.h>

char	*ft_strrev(char *str)
{
	int	i = -1;
	int length = 0;
	int tmp;

	while (str[length])
		length++;
	while (++i < length / 2)
	{
		tmp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tmp;
	}
	return (str);
}