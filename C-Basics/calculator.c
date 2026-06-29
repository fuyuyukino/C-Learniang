#include <cs50.h>
#include <stdio.h>

int main() {
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    int z = x + y;
    
    printf("%i\n", z)
}