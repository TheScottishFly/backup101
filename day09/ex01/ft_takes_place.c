#include <stdio.h>

void		ft_takes_place(int hour)
{
	char	*x_letter;
	char	*y_letter;
	int		y;

	if (hour >= 12)
	{
		x = "P.M.";
		hour - hour - 12;
		if (hour == 0)
			hour = 12;
	}
	else
		x = "A.M."
	if (hour + 1 >= 12)
		y = "P.M."
	else
		y = "A.M."
	if (hour + 1 > 12)
		y = 1;
	else
		hour + 1;
	if (x[0] == 'P' && hour == 11)
		y_letter = "A.M.";
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %s AND %d.00 %s\n", hour, x_letter, y, y_letter);
}
