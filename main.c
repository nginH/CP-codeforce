#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("harsh\n");

	char s[]="12345";


	for (int i = 0; s[i]; ++i){
        printf("%c", s[i]);

	}
	printf("after: \n\n");

	for (char x:s){
        printf("%c ", x);

	}
	

	return 0;
}