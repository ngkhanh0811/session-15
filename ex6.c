#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {
	int x, y;
	x = 20; y = 25;
	printf("\nx = %d,\ny = %d", x, y);
	swap(x, y);
	printf("\nSau khi nhap gia tri x, y la : %d %d", x, y);
}
swap(int u, int v)
{
	int temp;
	temp=u;
	u=v;
	v=temp;
	return;
}
