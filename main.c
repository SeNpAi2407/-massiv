#include <stdio.h>

int main() {
    int N;
    printf("Enter a non-negative integer N: ");
    scanf("%d", &N);
    int tens = (N / 10) % 10;

    printf("Number of tens in a number %d equals %d\n", N, tens);

    return 0;
}
