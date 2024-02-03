#include <stdio.h>

int c(int n, int arr[]) {
    int cn = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] * arr[j] == i + j + 2) {
                cn++;
            }
        }
    }
    return cn;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int r = c(n, arr);
        printf("%d\n", r);
    }

    return 0;
}