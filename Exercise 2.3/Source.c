#include <stdio.h>
#include <locale.h>
int home()
{
	float L = 33;
	int n = 3;
	printf("����:\n\t%3d\n\t%3.0f\n\t_________\n�����:\n\t%0+2.2f", n, L, n/L);
}
int main()
{
	setlocale(LC_ALL, "RUS");
	home();
}