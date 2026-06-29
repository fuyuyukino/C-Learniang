#include <stdio.h>

int main() {
    int dollar = 1;
    while(true) {
        char c = get_char("Here's $%i. Double it and give to next person? ", dollar);
        if (c == 'y' || c == 'Y') {
            dollar *= 2;
        }
        else {
            break;
        }
    }
}