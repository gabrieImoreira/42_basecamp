#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(4 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 4)
	{
		strs[offset] = "abc";
		offset++;
	}
	res_str = ft_strjoin(4, strs, "-");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}
