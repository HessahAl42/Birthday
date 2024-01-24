#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char *rev_print(char *str)
{
	int i; 

	i = ft_strlen(str);
	i--;
	while(i >= 0)
	{
		write(1, &str[i] , 1) ; 
		i--;
	}
 return(str);
}



int main(int argc, char **argv)
{
	if (argc == 2)
	rev_print(argv[1]);
	write(1,"\n", 1); 

}