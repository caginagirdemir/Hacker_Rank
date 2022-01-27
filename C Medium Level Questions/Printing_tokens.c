#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int i = 0;
    int counter = 0;
    char *word;
    word = (char *)malloc(strlen(s) + 1 * sizeof(char));
	while (i < strlen(s)){
		if(s[i] != ' '){
			word[counter] = s[i];
			counter++;
		} else if (s[i] == ' '){
			printf("%s\n",word);
			counter = 0;
			memset(word,'\0',(strlen(s)+1));
		}
		i++;
	}
	printf("%s\n",word);
    return 0;
}
