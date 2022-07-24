#include <stdio.h>

int main(void) {
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;
	printf("un=%u and not %d\n", un, un);  //无符号值3000000000和有符号之-129496296在系统内存中的内部表示完全相同
	printf("end=%hd and %d\n", end, end);
	printf("big=%ld and not %hd\n", big, big);//h修饰符可以显示较大整数被截断成short类型的情况，二进制中后16位被截断
	printf("verybig=%lld and not %ld\n", verybig, verybig);
	return 0;
}