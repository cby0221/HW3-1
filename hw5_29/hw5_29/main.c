#include <stdio.h>


int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("��J��ӼƦr�G");
    scanf_s("%d %d", &num1, &num2);

    // �T�O num1 �M num2 ������
    if (num1 > 0 && num2 > 0) {
        int result = lcm(num1, num2);
        printf("�̤p�����Ƭ��G%d\n", result);
    }
    else {
        printf("�п�J����ơC\n");
    }

    return 0;
}
