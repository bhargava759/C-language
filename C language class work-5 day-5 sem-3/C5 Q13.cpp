#include <stdio.h>
#include <ctype.h>
int main() {
    char sentence[1000];
    int i;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    for (i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
    }
    printf("Result: %s", sentence);
    return 0;
}

