#include <stdio.h>
#include <ctype.h>

char changeCase(char ch) {
    if (isupper(ch))
        return tolower(ch);
    else if (islower(ch))
        return toupper(ch);
    return ch;
}

int main() {
    char input;
    printf("�п�J�@�Ӧr���G");
    scanf_s(" %c", &input);

    char result = changeCase(input);
    printf("�ഫ�᪺�r�����G%c\n", result);

    return 0;
}