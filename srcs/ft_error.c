#include "pushSwap.h"

void	*ft_error(void	*ptr)
{
	write(2, "Error\n", 6);
	ft_safe_free(&ptr);
	return (NULL);
}
