#include <stdio.h>

int main() {
	int i=0, num=0, a[9], max=0;

	for (i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 9; i++){
		if (max < a[i]) {
			max = a[i];
			num = i + 1;
		}
	}

	printf("%d\n", max);
	printf("%d", num);

	return 0;
}