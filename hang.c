#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int a;

    printf("Vvedite stroku: ");
    fgets(str, 100, stdin);

    printf("Nomer elementa: ");
    scanf("%d", &a);

    int len = strlen(str);

    if (a >= 1 && a <= len) {
        for (int i = a - 1; i < len; i++) {
            str[i] = str[i + 1];
        }
        printf("Resultat: %s\n", str);
    }
    if (a < 1 || a > strlen(str)) {
        printf("Oshibka\n");
        return 0;
    }


    return 0;
}