#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "labs.h"

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int isConsonant(char c) {
    c = tolower(c);
    return (isalpha(c) && !isVowel(c));
}

int countWords(const char *str) {
    int count = 0;
    int inWord = 0;

    char *token;
    char *inputStr = strdup(str); // Дублируем строку, так как strtok изменяет её

    token = strtok(inputStr, " ");
    while (token != NULL) {
        if (isVowel(token[0]) && isConsonant(token[strlen(token) - 1])) {
            count++;
        }
        token = strtok(NULL, " ");
    }
    free(inputStr); // Освобождаем выделенную память
    return count;
}
