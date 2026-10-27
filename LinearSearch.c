#include <stdio.h>
int main() {
    int n, i, key;
    int a[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at index %d", i);
            return 0;
        }
    }
    printf("Not found");
    return 0;
}
