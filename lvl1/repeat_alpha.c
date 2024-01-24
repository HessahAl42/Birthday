#include <unistd.h>

void repeat_alpha(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
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
	repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return(0);
}
