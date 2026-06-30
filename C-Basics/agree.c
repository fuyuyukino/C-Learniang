#include <stdio.h>
#include <cs50.h>

int main() {
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y') {
        printf("Agree\n");
    }
    else if (c == 'n' || c == 'N') {
        printf("Don't agree\n");
    }
    else {
        printf("Please input n or y");
    }
}