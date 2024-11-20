#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 50;
	int b = 5;
	printf("%d\n", a % b);
	//这里a能被b整数，所以没有余数
	a = 19;
	b = 2;
	//这里赋值过后，a是变量，可以更改值
	printf("%d\n", a % b);
	//a%b其实就是数学上的取余数
	return 0;
}