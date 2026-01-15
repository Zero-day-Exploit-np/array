#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "hello my name is bikram.";
    int len = strlen(a);

    for (int i = len - 1; i >= 0; i--) {

        if (a[i] == ' ' || i == 0) {

            if (i != 0)
                i++;

            while (a[i] != ' ' && a[i] != '\0' && a[i] != '.') {
                printf("%c", a[i]);
                i++;
            }

            printf(" ");
        }
    }
    return 0;
}
