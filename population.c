#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int m;
    do
    {
        m = get_int("Start size: ");
    }
    while (m < 9);

    // TODO: Prompt for end size
    int n;
    do
    {
        n = get_int("End size: ");
    }
    while (n < m);

    // TODO: Calculate number of years until we reach threshold
    int y = 0;
    if (m == n)
    {
        y = 0;
    }
    else
        do
        {
            y++;
            m = m + (m / 3) - (m / 4);
        }
        while (m < n);

    // TODO: Print number of years
    printf("Years: %i\n", y);

}