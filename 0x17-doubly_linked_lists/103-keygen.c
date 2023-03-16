#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc < 2){
		printf("Usage: %s <username>\n", argv[0]);
		exit(1);
	}
	
	char key[20] = {0};
	
	// Generate a key based on the username
	int len = strlen(argv[1]);
	int i;
	for(i = 0; i < len; ++i){
		key[i] = (argv[1][i] + argv[1][len - i - 1]) % 25 + 'a';
	}
	
	printf("%s\n", key);
	return 0;
}
