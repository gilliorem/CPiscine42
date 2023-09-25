#include <unistd.h>

void display_last (char hundred, char ten, char unit)
{
	write(1, &hundred, 1);
	write(1, &ten, 1);
	write(1, &unit, 1);
	write(1, "\n", 1);
}

void display_numbers(char hundred, char ten, char unit)
{
	write(1, &hundred, 1);
	write(1, &ten, 1);
	write(1, &unit, 1);	
	write(1, ", ", 2);
}


void	print_comb(void)
{
	int hundreds = '0';
	int tens;
	int units;

	while (hundreds <= '7')
	{
		tens = hundreds + 1;

		while (tens <= '8')
		{
			units = tens + 1;
			while (units <= '9')
			{
				if (hundreds != '7')
				{
					display_numbers(hundreds, tens, units);
				}
				else if (hundreds == '7')
				{
					display_last(hundreds, tens, units);
				}	
				units ++;
			}
			tens++;
		}	
		hundreds++;
	}	
}

int main(void)
{
	print_comb();
}
