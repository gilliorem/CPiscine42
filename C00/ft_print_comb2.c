#include <unistd.h>


void	display_digits(void)
{
	int left_tens = '0';
	int left_units = '0';
	int right_tens = '0';
	int right_units = '0';
	while (left_tens <= '9')
	{
		left_units = '0';
		while (left_units <= '9')
		{
			right_tens = left_tens + 1;
			while (right_tens <= '9')
			{
				right_units = left_units + 1;
				while (right_units <= '9')
				{
					write(1, &left_tens, 1);
					write(1, &left_units,1);
					write(1, &right_tens, 1);
					write(1, &right_units, 1);
					write(1, ", ", 2);
					right_units++;
				}
				right_tens++;
			}
			left_units++;
		}
		left_tens++;
	}
	write(1, "\n", 1);
}




void	ft_print_comb2(void)

{
	display_digits();
}
int	main(void)
{
	ft_print_comb2();
}
