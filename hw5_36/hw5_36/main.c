#include <stdio.h>

void hanoi(int n, char from_peg, char to_peg, char aux_peg) {
    if (n == 1) {
        printf("���ʶ�L 1 �q %c �� %c\n", from_peg, to_peg);
        return;
    }

    hanoi(n - 1, from_peg, aux_peg, to_peg);
    printf("���ʶ�L %d �q %c �� %c\n", n, from_peg, to_peg);
    hanoi(n - 1, aux_peg, to_peg, from_peg);
}

int main() {
    int n;
    printf("�п�J��L�ƶq�G");
    scanf_s("%d", &n);

    printf("�e���𲾰ʨB�J�G\n");
    hanoi(n, 'A', 'C', 'B'); 

    return 0;
}