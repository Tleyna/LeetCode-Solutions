#include <stdio.h>

int getValue(char c);
int romanToInt(char* c);

int main (void)
{
    char number[100];

    printf("Input: ");
    scanf("%s", number);

    int result = romanToInt(number);
    printf("Output: %d\n", result);
}

int getValue(char c)
{
    switch (c)
     {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            return 0;
            break;
    }
}

int romanToInt(char* c)
{
    int result = 0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (getValue(c[i]) < getValue(c[i + 1]))
        {
            result -= getValue(c[i]);
        }
        else {
            result += getValue(c[i]);
        }
    }
    return result;
}
