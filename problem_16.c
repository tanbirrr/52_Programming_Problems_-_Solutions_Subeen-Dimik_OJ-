#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    int i, j, t, k = 0;
    char str[1002], word[1002];
    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        fflush(stdin);
        scanf(" %[^\n]", str);

        for (j = 0; j < strlen(str); j++) {
            if (str[j] == ' ') {
                word[k] = '\0';
                reverseString(word);
                printf("%s ", word);
                k = 0;
            } else {
                word[k] = str[j];
                k++;
            }
        }
        if (k > 0) {
            word[k] = '\0';
            reverseString(word);
            printf("%s\n", word);
            k = 0;
        }
    }

    return 0;
}
