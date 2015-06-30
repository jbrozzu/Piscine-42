#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	*a = tmp;
	tmp = *b;
	*b = *a;
	*a = tmp;
}

int main(int argc, const char *argv[])
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 0;
	b = 1;
	pa = &a;
	pb = &b;

	printf("%d %d \n", a, b);
	ft_swap(pa, pb);
	printf("%d %d \n", a, b);
	return 0;
}
