/*Напишите программу, которая определяет являются ли введенное число палиндромом.
(Палиндром – это число или текст, который одинаково читается слева направо и справа
налево(12321,555, 4155514, 11).*/

#include <stdio.h>

int main()
{
    unsigned char buf[11];
    unsigned int input;

    printf("Input = ");
    scanf("%d", &input);

    unsigned int i = 0;
    while ( input > 0 )
    {
        unsigned char num = input % 10;
        input /= 10;
        printf("DEBUG [%u] = %u\n", i, num);
        buf[i++] = num;
    }
    unsigned int size = i;
    printf("DEBUG size = %u\n", size);

    unsigned int half = size / 2;
    for ( i = 0; i < half; i++ )
    {
        unsigned char a = buf[i];
        unsigned char b = buf[size - i - 1];
        printf("DEBUG [%u] a = %u, b = %u\n", i, a, b);
        if ( a == b )
        {
            printf("DEBUG matched\n");
        }
        else
        {
            printf("DEBUG not matched\n");
            printf("Not a palindrom!\n");
            return 0;
        }
    }

    printf("Palindrom!\n");
    return 0;
}

// без помощи друзей, это было невозможно