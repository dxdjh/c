//以十进制八进制十六进制打印十进制数100
#include <stdio.h>

int main() {
	int x = 100;
	printf("dec=%d;octal=%o;hex=%x\n", x, x, x);
	printf("dec=%d;octal=%#o;hex=%#x", x, x, x);   //#：加上进制的前缀，八进制0，十六进制0x
	getchar();
	return 0;


}