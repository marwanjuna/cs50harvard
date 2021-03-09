#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Input your name
    string name = get_string("What's your name?\n");
    printf("hello, %s\n", name);
}