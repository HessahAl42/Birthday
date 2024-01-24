#include <unistd.h>

void search_and_replace(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			count = str[i] - 64;
		else if (str[i] >= 'a' && str[i] <= 'z')
			count = str[i] - 96;
		while (count)
		{
			write(1, &str[i], 1);
			count--;
		}
		count = 1;
		i++;
	}


}

int		main(int argc, char **argv)
{
	if (argc == 2)
	search_and_replace(argv[1]);
	write(1, "\n", 1);
	return(0);
}
