#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    float x, y;
    char c;

    printf("Введите выражение (пример: 10-8): ");

    scanf("%f%c%f", &x, &c, &y);

    switch (c)
    {
    case '+':
        printf("=%f", x + y);
        break;

    case '-':
        printf("=%f", x - y);
        break;

    case '*':
        printf("=%f", x * y);
        break;

    case '/':
        if (y != 0)
            printf("=%f", x / y);
        else
            printf("Ошибка: деление на ноль!");
        break;

    case '^':
        printf("=%f", pow(x, y));
        break;

    default:
        printf("Ошибка: неизвестная операция!");
    }

    return 0;
    system("pause");
}
