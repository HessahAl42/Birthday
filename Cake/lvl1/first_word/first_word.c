#include <unistd.h>

void ft_first_word(char *str)
{ 
	int i;

	i= 0; 
	while (str[i] == ' ' || str[i] == '\t')
	i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
	write(1,&str[i], 1 );
	i++;
	}
}

int main (int argc, char **argv)
{
	int i; 

	i= 0;
	if (argc == 2)
	ft_first_word(argv[1]);
		write(1,"\n", 1 );
	return (0);
	
}