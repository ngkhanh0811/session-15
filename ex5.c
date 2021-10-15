#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {
	int a, b, c;
	a = b = c = 0;
	printf("\n Nhap so nguyen thu nhat : ");
	scanf("%d", &a);
	printf("\n Nhap so nguyen thu hai : ");
	scanf("%d", &b);
	c = adder(a, b);
	printf("\n\n a va b trong main() la : %d %d ", a, b);
	printf("\n c trong main() la : %d ", c);
}
adder(int a, int b)
{
	int c;
	c = a + b;
	a *=a;
	b+=5;
	printf("\n a va b trong ham adder la : %d %d", a, b);
	printf("\n c trong ham adder la : %d", c);
	return(c);
}
