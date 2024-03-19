#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return (s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/* Devuelve un puntero a la primera ocurrencia de
cualquier caracter de s2
*/