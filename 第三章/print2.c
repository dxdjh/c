#include <stdio.h>

int main(void) {
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;
	printf("un=%u and not %d\n", un, un);  //�޷���ֵ3000000000���з���֮-129496296��ϵͳ�ڴ��е��ڲ���ʾ��ȫ��ͬ
	printf("end=%hd and %d\n", end, end);
	printf("big=%ld and not %hd\n", big, big);//h���η�������ʾ�ϴ��������ضϳ�short���͵�������������к�16λ���ض�
	printf("verybig=%lld and not %ld\n", verybig, verybig);
	return 0;
}