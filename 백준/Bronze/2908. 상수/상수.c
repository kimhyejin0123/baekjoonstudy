#include <stdio.h>

int main() {
	/* int n1, n2;
	scanf("%d %d", &n1, &n2);
	
	n1 = n1/100 + ((n1/10)%10)*10 + ((n1%100)%10)*100;
	n2 = n2/100 + ((n2/10)%10)*10 + ((n2%100)%10)*100;

	if(n1 < n2) 
        printf("%d", n2);
	else 
        printf("%d", n1); 
    */
	char a[4];
	char b[4];
	char tmp;

	scanf("%s", a);
	scanf("%s", b);

	tmp = a[0];
	a[0] = a[2];
	a[2] = tmp;

	tmp = b[0];
	b[0] = b[2];
	b[2] = tmp;

	if (strcmp(a, b) > 0) {
		printf("%s", a);
	}
	else {
		printf("%s", b);
	}
}