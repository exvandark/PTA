#include<stdio.h>
int main() {
	int j = 2, a[31] = { 0 }, b[31] = { 0 };
	int n, i = 0, flag = 1, k, l = 0, minlen = 1;
	scanf("%d", &n);

	for (j = 2; flag; j++) {
		k = n;
		l = j;
		i = 0;
		while (k >= l) {
			if (k % l == 0) {
				k = k / l;
				a[i] = l;
				i++;
				l++;
			}
			else
				break;

		}
		if (n <= 1LL * j * j)
			flag = 0;
		else {
			if (i > minlen) {
				minlen = i;
				for (i = 0; i < minlen; i++)
					b[i] = a[i];

			}
		}

	}
	printf("%d\n", minlen);
	if (minlen == 1 && a[0] == 0)
		printf("%d", n);
	else if (minlen == 1 && a[0] != 0)
		printf("%d", a[0]);
	else {
		for (i = 0; i < minlen - 1; i++)
			printf("%d*", b[i]);
		printf("%d", b[i]);

	}


	return 0;
}