#include <stdio.h>

void	meridiem(int boolean, char *var )
{

	if (boolean)
		var[0] = 'P';
	else
		var[0] = 'A';
	
	var[1] = '.';
	var[2] = 'M';
	var[3] = '.';
	var[4] = '\0';
}

void	ft_take_place(int hour)
{
	int before_hour;
	char before_meridiem[4];
	int after_hour;
	char after_meridiem[4];

	if (hour <= 11)
	{
		before_hour = hour;
		meridiem(0, before_meridiem);

		after_hour = before_hour + 1;
		meridiem(0, after_meridiem);
	}
	else if (hour > 12 && hour < 24)
	{
		before_hour = hour - 12;
		meridiem(1, before_meridiem);

		after_hour = before_hour + 1;
		meridiem(1, after_meridiem);
	}
	else if (hour == 12)
	{
		before_hour = hour;
		meridiem(0, before_meridiem);

		after_hour = 1;
		meridiem(1, after_meridiem);
	}
	else if (hour == 24)
	{
		before_hour = 12;
		meridiem(1, before_meridiem);

		after_hour = 0;
		meridiem(0, after_meridiem);
	}
	
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s \n", before_hour, before_meridiem, after_hour, after_meridiem); 
}

int main()
{
	int hour;

	hour = 0;

	while (hour != 25)
		ft_take_place(hour++);
	return 0;
}
