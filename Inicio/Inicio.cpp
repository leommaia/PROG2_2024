#include <stdio.h>

void acessa(int a[]);

int main() {

	int num[5] = { 2,4,5,6,7 };

	acessa(num);

	return 0;
}

void acessa(int a[]) {

	int i;

	for (i = 0; i < 5; i++) {
		printf("\n%d", a[i]);
	}

}