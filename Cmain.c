#include <stdio.h>

int main()
{
	
	char b[10] = "가나다라마";
	int c[20] = {11,22,33};
	printf("int size: %d\n", sizeof(int));
	printf("float size : %d\n", sizeof(float));
	printf("char size : %d\n", sizeof(char));
	printf("char b size : %d\n", sizeof(b));
	printf("int c[20] size : %d\n", sizeof(c));

	for (int i = 0; i < 10; i++)
	{
		printf("char b[%d] = %c\n", i, b[i]);
	}
}