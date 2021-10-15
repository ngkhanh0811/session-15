#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {
	incre();
	incre();
	incre();
}
incre()
{
	char var = 75;
	printf("\nKy tu luu tru gia tri cua var la : %c", var++);
	return 0;
}
