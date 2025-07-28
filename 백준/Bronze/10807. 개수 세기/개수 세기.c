#include <stdio.h>

int main(void) {
	int N, v, count = 0;
	int numbers[100]; 


	scanf("%d", &N);


	for (int i = 0; i < N; i++) {
		scanf("%d", &numbers[i]);
	}


	scanf("%d", &v);


	for (int i = 0; i < N; i++) {
		if (numbers[i] == v) {
			count++;
		}
	}

	
	printf("%d\n", count);

	return 0;
}

