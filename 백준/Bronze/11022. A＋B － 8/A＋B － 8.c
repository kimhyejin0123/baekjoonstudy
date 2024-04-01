#include <stdio.h>

int main(void) {
	int T = 0;
	int a, b, c ;
	scanf("%d",&T);
	for (int i = 1; i <= T; i ++) {
		scanf("%d %d", &a, &b);
        c = a+ b ;
		if (0 < a && b < 10) printf("Case #%d: %d + %d = %d \n", i, a, b, c);
	}
	return 0;
}