#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

// ����������ת��ΪĿ�����
void convert_integer(int num, int base, char* result) {
    char buffer[32] = {0};
    int index = 0;

    do {
        int remainder = num % base;
        buffer[index++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        num /= base;
    } while (num > 0);

    // ��ת�����õ���ȷ˳��
    for (int i = 0; i < index; i++) {
        result[i] = buffer[index - 1 - i];
    }
    result[index] = '\0';
}

// ��С������ת��ΪĿ����ƣ���ౣ��6λ��
void convert_fraction(double fraction, int base, char* result) {
    int index = 0;
    result[index++] = '.'; // ���С����

    for (int i = 0; i < 6 && fraction > 0; i++) { // ��ౣ��6λС��
        fraction *= base;
        int integer = (int)fraction;
        result[index++] = (integer < 10) ? (integer + '0') : (integer - 10 + 'A');
        fraction -= integer;
    }
    result[index] = '\0';
}

// ������������ʮ����������������ƺ�ʮ������
void decimal_to_bases(double num) {
    // ����������С������
    int integer_part = (int)num;
    double fraction_part = num - integer_part;

    // ������ת��
    char int_bin[32] = {0};
    char frac_bin[32] = {0};
    convert_integer(integer_part, 2, int_bin);
    convert_fraction(fraction_part, 2, frac_bin);
    printf("������: %s%s\n", int_bin, frac_bin);

    // �˽���ת��
    char int_Oct[32] = { 0 };
    char frac_Oct[32] = { 0 };
    convert_integer(integer_part, 8, int_Oct);
    convert_fraction(fraction_part, 8, frac_Oct);
    printf("�˽���: %s%s\n", int_Oct, frac_Oct);

    // ʮ������ת��
    char int_hex[32] = {0};
    char frac_hex[32] = {0};
    convert_integer(integer_part, 16, int_hex);
    convert_fraction(fraction_part, 16, frac_hex);
    printf("ʮ������: %s%s\n", int_hex, frac_hex);

}

int main() {
    double number;
    printf("������ʮ������: ");
    scanf("%lf", &number);
    decimal_to_bases(number);
    return 0;
}