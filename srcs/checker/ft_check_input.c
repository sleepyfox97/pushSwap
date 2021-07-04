#include "pushSwap.h"

//make int array when chekking the argv is only digit.
//and the check there is no dupulicate.
int	*ft_check_input(int argc, char **argv)
{
	int		i;
	int		*num;
	long	tmp;

	if (argc == 1)
		return (ft_error1(NULL));
	num = (int *)malloc(sizeof(int) * (argc - 1));
	if (num == NULL)
		return (ft_error1(NULL));
	i = 1;
	while (i < argc)
	{
		if (ft_check_argv(argv[i]) == _ERROR)
			return (ft_error1((void *)num));
		if (!ft_myatoi(argv[i], &tmp))
			return (ft_error1((void *)num));
		num[i - 1] = (int)tmp;
		i++;
	}
	if(ft_check_dupulicate(num, argc - 1) == _ERROR)
		return (ft_error1((void *)num));
	return (num);
}

//check each argv is in INT.
int	ft_check_argv(char *str)
{
	size_t	i;

	if (!(('1' <= str[0] && str[0] <= '9') || str[0] == '-'))
		return (_ERROR);
	i = 1;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]) || i > 11)
			return (_ERROR);
		i++;
	}
	return (1);
}

//check there is no dupulicate in the num array.
int	ft_check_dupulicate(int *num, int size)
{
	int	i;
	int	j;

	i = 0;
	if (size == 1)
		return (1);
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (num[i] == num[j])
				return (_ERROR);
			j++;
		}
		i++;
	}
	return (1);
}


// gcc ft_check_input.c ft_error.c -I../../include  -L../../libft -lft
// でコンパイルしたら，このファイル内の関数の挙動がチェック可能．
// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int *num;
// 	int i;
// 	num = ft_check_input(argc, argv);
// 	printf("ptr of num = %p\n", num);
// 	if (num == NULL)
// 		return (0);
// 	i = 0;
// 	while (i < argc - 1)
// 	{
// 		printf("num[%d] = %d\n", i , num[i]);
// 		i++;
// 	}
// 	return (0);
// }
