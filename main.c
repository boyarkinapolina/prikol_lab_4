#include <stdio.h>
#include "prikol4.h"

int main() {
    char a[137];
    printf("Enter digit in 16 cc: ");
    scanf("%s", a);
    printf("10 cc: %d\n", perevod(a));
    printf("count 1: %d", perevodperevoda(perevod(a)));
    return 0;
}