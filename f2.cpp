/
#include <stdio.h>

int main(void) {
    int sum = 0;
    int i = 1;
    while (i <= 500)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}