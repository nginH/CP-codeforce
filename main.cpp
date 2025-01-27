
#include <stdio.h>
#include <string.h>


struct car {
	char brand[100];
	char modal[100];
	int year;

};
typedef struct car car;
int main(void){

	for (int i = 1; i <= 5; ++i){
	for (int j = 1; j <=5; ++j)
	{
if (j<=i)
{
printf("*");
}else
printf(" ");
	}
	printf("\n");
		/* code */
	}







return 0;

}
