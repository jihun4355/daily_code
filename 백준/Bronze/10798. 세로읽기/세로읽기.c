#include <stdio.h>
#include <string.h>

int main(void) {
	char words[5][16]; 
	int max_len = 0;
	
	for (int i = 0; i < 5; i++) {
		scanf("%s", words[i]);
		int len = strlen(words[i]);
		if (len > max_len) {
			max_len = len; 
		}
	}

	
	for (int col = 0; col < max_len; col++) {
		for (int row = 0; row < 5; row++) {
			if (col < strlen(words[row])) {
				printf("%c", words[row][col]);
			}
		}
	}

	return 0;
}