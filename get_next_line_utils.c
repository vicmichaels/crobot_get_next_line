#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *memory, char *buffer)
{
	char		*new;
	int			i;
	int			j;
	int			new_len;

	if (!memory && !buffer)
		return (0);
	new_len = ft_strlen(memory) + ft_strlen(buffer) + 1;
	new = malloc(sizeof(char) * new_len);
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	new[new_len - 1] = '\0';
	new_len = 0;
	if (memory)
		while (memory[i] != '\0')
			new[new_len++] = memory[i++];
	if (buffer)
		while (buffer[j] != '\0')
			new[i++] = buffer[j++];
	free(memory);
	return (new);
}

int	ft_isnewline(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*free_smth(char *str)
{
	free (str);
	return (NULL);
}
