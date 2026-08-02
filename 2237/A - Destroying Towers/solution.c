#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[100];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[j] > a[i]) {
                    a[j] = a[i];
                    break;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
