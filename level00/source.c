  
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;

	puts("***********************************");
	puts("* \t    -level00 - \t\t  *");
	puts("***********************************");
	printf("Password: ");
	scanf("%d", &i);
	if (i != 5276)
	{
		puts("\nInvalid Password!");
		return (1);
	}
	puts("\nAuthenticated!");
	system("/bin/sh");
}