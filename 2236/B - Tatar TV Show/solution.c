#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        char s[200001];
        scanf("%s", s);
        int ok = 1;
        for (int r = 0; r < k && ok; r++) {
            int parity = 0;
            for (int j = r; j < n; j += k) {
                if (s[j] == '1') parity ^= 1;
            }
            if (parity) ok = 0;
        }
        printf("%s\n", ok ? "YES" : "NO");
    }
    return 0;
}
