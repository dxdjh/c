#include <stdio.h>
#define PRAISE "you are a pretty boy!"

int main(void) {
	char name[10];
	printf("what's your name?");
	scanf("%s", name);
	printf("hello ,%s.%s", name, PRAISE);
	return 0;
}