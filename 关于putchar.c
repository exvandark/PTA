#include <stdio.h>

int main()
{
	//putchar('j');//可行

	//putchar() = 'j';//不可行
	//'j' = putchar();//不可行

	//int ch;
	//ch = 'j';
	//putchar() = ch;//不可行
	int ch;
	ch = 'j';
	
	printf("%d%c\n", ch, ch);
	return 0;
	ch = 'j';

	putchar(ch);//无输出
}