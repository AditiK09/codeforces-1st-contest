
#include <stdio.h>
 
int is_prime(int num) {
    for (int i = 2; i<num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int next_prime = n + 1;
    while (!is_prime(next_prime)) {
        next_prime++;
    }
    if (m == next_prime) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    return 0;
}