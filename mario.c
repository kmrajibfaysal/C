#include <cs50.h>
#include <stdio.h>

void brickMaker(int r, int col);

int main(void)
{
    int row = get_int("What's row number? ");
    int column = get_int("What's column number? ");

    brickMaker(row, column);

    printf("\n");
}

void brickMaker(int r, int col)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}