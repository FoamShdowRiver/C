#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

// 将整数部分转换为目标进制
void convert_integer(int num, int base, char* result) {
    char buffer[32] = {0};
    int index = 0;

    do {
        int remainder = num % base;
        buffer[index++] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        num /= base;
    } while (num > 0);

    // 反转余数得到正确顺序
    for (int i = 0; i < index; i++) {
        result[i] = buffer[index - 1 - i];
    }
    result[index] = '\0';
}

// 将小数部分转换为目标进制（最多保留6位）
void convert_fraction(double fraction, int base, char* result) {
    int index = 0;
    result[index++] = '.'; // 添加小数点

    for (int i = 0; i < 6 && fraction > 0; i++) { // 最多保留6位小数
        fraction *= base;
        int integer = (int)fraction;
        result[index++] = (integer < 10) ? (integer + '0') : (integer - 10 + 'A');
        fraction -= integer;
    }
    result[index] = '\0';
}

// 主函数：输入十进制数，输出二进制和十六进制
void decimal_to_bases(double num) {
    // 分离整数和小数部分
    int integer_part = (int)num;
    double fraction_part = num - integer_part;

    // 二进制转换
    char int_bin[32] = {0};
    char frac_bin[32] = {0};
    convert_integer(integer_part, 2, int_bin);
    convert_fraction(fraction_part, 2, frac_bin);
    printf("二进制: %s%s\n", int_bin, frac_bin);

    // 八进制转换
    char int_Oct[32] = { 0 };
    char frac_Oct[32] = { 0 };
    convert_integer(integer_part, 8, int_Oct);
    convert_fraction(fraction_part, 8, frac_Oct);
    printf("八进制: %s%s\n", int_Oct, frac_Oct);

    // 十六进制转换
    char int_hex[32] = {0};
    char frac_hex[32] = {0};
    convert_integer(integer_part, 16, int_hex);
    convert_fraction(fraction_part, 16, frac_hex);
    printf("十六进制: %s%s\n", int_hex, frac_hex);

}

int main() {
    double number;
    printf("请输入十进制数: ");
    scanf("%lf", &number);
    decimal_to_bases(number);
    return 0;
}