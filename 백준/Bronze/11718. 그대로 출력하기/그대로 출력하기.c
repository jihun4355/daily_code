#include <stdio.h>

int main(void) {
	char line[101]; 


	while (fgets(line, sizeof(line), stdin) != NULL) {
		printf("%s", line); 
	}

	return 0;
}