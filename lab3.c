#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>

#define D 2.54

int nums();
int dymes();
int tabl();

int main()
{
    system("chcp 1251");

    nums();
    dymes();
    tabl();

    system("pause");
    return 0;
}

// ЗАДАНИЕ 1
int nums()
{
    int num;
    int num2;

    puts("Введите число");
    scanf("%d", &num);
    printf("Введено число %d\n", num);

    puts("Введите число");
    scanf("%d", &num2);
    printf("Введено число %d\n", num2);

    if (num != 0) {
        printf("Сумма %d, Разность %d, Произведение %d, Частное %.2f, Остаток %d\n",
               num + num2,
               num - num2,
               num * num2,
               num2 * 1.0 / num,
               num2 % num);
    }
    else {
        printf("Деление на ноль невозможно.\n");
    }

    return 0;
}

// ЗАДАНИЕ 2
int dymes()
{
    int dym;
    float result;

    printf("Введите данные для расчета\n");
    scanf("%d", &dym);

    result = D * dym;
    printf("%d английских дюймов - это %.1f см\n", dym, result);

    return 0;
}

// ЗАДАНИЕ 3
int tabl()
{
    float a, b;

    puts("Введите число a");
    scanf("%f", &a);

    puts("Введите число b");
    scanf("%f", &b);

    printf("-----------------------------\n");
    printf("| %-10s | %-8s | %-8s |\n", "a * b", "a + b", "a - b");
    printf("-----------------------------\n");
    printf("| %-10.2f | %-8.2f | %-8.2f |\n",
           a * b, a + b, a - b);
    printf("-----------------------------\n");

    return 0;
}