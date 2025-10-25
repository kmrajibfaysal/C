#include <cs50.h>
#include <stdio.h>

int get_n(void);
void meow(int times);

int main(void)
{
    // Get a number from user
    int n = get_n();
    meow(n);
}

void meow(int times)
{
    // Meow some number of times
    for (int i = 0; i < times; i++)
    {
        printf("Meow!\n");
    }
}

int get_n(void)
{
    int n;
    do
    {
        n = get_int("What's n? ");
    } while (n < 0);
    return n;
}