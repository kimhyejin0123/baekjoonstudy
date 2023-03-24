#include <stdio.h>

int main(void) {
	int tc = 0;
	int a = 0;
	int b = 0;
	scanf("%d",&tc);
	for (int i = 1; i <= tc; i ++) {
		scanf("%d %d", &a, &b);
		if (0 < a && b < 10) printf("Case #%d: %d\n", i, a+b);
	}
	return 0;
}