// Prog10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <windows.h>

void to_base_n(unsigned long n, int m); /* рекурсивная функция */

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    unsigned long number;
    int base;
    printf("Bвeдитe целое число и основание (q для завершения) :\n");
    while (scanf_s("%lu%d", &number, &base) == 2)
    {
        if (base == 2)
        {
            printf("Двоичный эквивалент: ");
        }
        else if (base == 8)
        {
            printf("Восьмеричный эквивалент: ");
        }
        else
            printf("Десятичный эквивалент: ");
      
        to_base_n(number, base);
        putchar('\n');
        printf("Введите целое число и основание (q для завершения):\n");
    }
    printf("nporpaмa завершена . \n");

    return 0;
}

void to_base_n(unsigned long n, int m) /* рекурсивная функция */
{
    if (m == 8)
    {
        int r;
        r = n % 8;
        if (n >= 2)
            to_base_n(n / 8, m);
        switch (r)
        {
            case 0:
                putchar('0');
                break;
            case 1:
                putchar('1');
                break;
            case 2:
                putchar('2');
                break;
            case 3:
                putchar('3');
                break;
            case 4:
                putchar('4');
                break;
            case 5:
                putchar('5');
                break;
            case 6:
                putchar('6');
                break;
            case 7:
                putchar('7');
                break;
            default:
                break;
        }
    }

    if (m == 2)
    {
        int r;
        r = n % 2;
        if (n >= 2)
            to_base_n(n / 2, m);
      
        putchar(r == 0 ? '0' : '1');
    }

    if (m == 10)
    {
        printf("%d", n);
    }
    return;
}
