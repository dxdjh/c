//��ʮ���ư˽���ʮ�����ƴ�ӡʮ������100
#include <stdio.h>

int main() {
	int x = 100;
	printf("dec=%d;octal=%o;hex=%x\n", x, x, x);
	printf("dec=%d;octal=%#o;hex=%#x", x, x, x);   //#�����Ͻ��Ƶ�ǰ׺���˽���0��ʮ������0x
	getchar();
	return 0;


}