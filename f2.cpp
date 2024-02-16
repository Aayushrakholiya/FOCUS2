/
#include <stdio.h>

int main(void) {
    int add = 0;
    int i = 1;
    while (i <= 500)
    {
        add += i;
        i++;
    }
    printf("%d\n", add);
    return 0;
}