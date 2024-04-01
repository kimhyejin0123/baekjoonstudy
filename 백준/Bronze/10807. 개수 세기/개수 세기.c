#include <stdio.h>

int main() {
	int num, j, i[100], find, n=0;
	scanf("%d", &num);
	for (j = 0; j < num; j++) {
		scanf("%d ", &i[j]);
	}
	scanf("%d", &find);
	for (j = 0; j < num; j++) {
		if (i[j]==find) n++;
	}
	printf("%d", n);
}