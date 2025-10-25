#include <cs50.h>
#include <stdio.h>

void meow(int times);

int main(void)
{
    // Get a number from user
    int n = get_int("What's n? ");
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