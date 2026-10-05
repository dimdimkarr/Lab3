#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>

int tripcost()
{
    float distance;
    float price;
    float consumption;
    float result;

    printf("Введите расстояние поездки (км): ");
    scanf("%f", &distance);

    printf("Введите стоимость 1 литра бензина (руб.): ");
    scanf("%f", &price);

    printf("Введите расход топлива на 100 км (л): ");
    scanf("%f", &consumption);

    result = (distance / 100) * consumption * price;

    printf("Стоимость поездки: %.2f руб.\n", result);

    return 0;
}

int main()
{
    system("chcp 1251");

    tripcost();

    system("pause");
    return 0;
}