#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m = 1, x = 1, a;
	scanf("%d", &n);
	a = 2 * n - 3;
	//loop first n lines
	while (x <= n) {
		//seperate into 3 parts 1.start 2.middle 3.end
		int y = 1;
		int z = 1;
		//start part
		while (y <= m) {
			printf("* ");
			if (y == n) {
				printf("\b\b");
			}
			y = y + 1;
		}
		//middle part
		while (z <= a) {
			printf("  ");
			z = z + 1;
		}
		y = 1;
		//end part
		while (y <= m) {
			printf("* ");
			y = y + 1;
		}

		printf("\n");
		
		x = x + 1;
		m = m + 1;
		a = a - 2;
	}
	//reset all variables to the original
	m = 1, x = 1, a = n;
	//loop the last n-1 line part
	while (x <= n - 1) {
		int y = 1;
		int z = 1;
		//start part
		while (z <= a - 1) {
			printf("* ");
			z = z + 1;
		}
		//middle part
		while (y <= m) {
			printf("  ");
			y = y + 1;
		}
		z = 1;
		//end part
		while (z <= a - 1) {
			printf("* ");
			z = z + 1;
		}

		x = x + 1;
		m = m + 2;
		a = a - 1;
		
		printf("\n");
	}

	return 0;
}