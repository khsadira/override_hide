#include <stdio.h>
#include <string.h>
#include <strings.h>

char a_user_name[256];

int verify_user_name() {
	puts("verifying username....");
	return (strncmp("dat_wil", a_user_name, 7));
}

int verify_user_pass(char *pass) {
	return (strncmp("admin", pass, 5));
}

int main(void) {
	int	ret;
	char	pass[64];
	int	i;

	bzero(&(pass[0]), 64);
	i = 0;
	puts("********* ADMIN LOGIN PROMPT *********");
	printf("Enter Username: ");
	fgets(a_user_name, 256, (FILE *)stdin);
	if ((i = verify_user_name()))
	{
		puts("nope, incorrect username...\n");
		ret = 1;
	}
	else
	{
		puts("Enter Password: ");
		fgets(pass, 100, (FILE *)stdin);
		i = verify_user_pass(pass);
		if (i == 0)
		{
			puts("nope, incorrect password...\n");
			ret = 1;
		}
		if (i == 0)
		{
			ret = 0;
		}
	}
	return (ret);
}