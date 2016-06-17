#include<stdio.h>
int main(void)
{
	signed short a = 1000;
	short b = -1000;
	if (a > b) {
		printf("a > b");
	}
	else {
		printf("b>a");
	}
	return 0;
}