#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome (int x);

int main (void)
{
    int number;
    printf("Input x: ");
    scanf("%d", &number);

    if (isPalindrome(number) == true)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }


}

bool isPalindrome (int x)
{
    if (x < 0)
    {
        return false;
    }

    char array[20];
    snprintf(array, sizeof(array), "%d", x);

    int length = strlen(array);

    for (int i = 0; i < length / 2; i++)
    {
        if (array[i] != array[length - i - 1])
        {
            return false;
        }
    }
    return true;
}
