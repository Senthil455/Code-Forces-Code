#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n;
        scanf("%d", &n);
 
        int p[505];
 
        for (int i = 1; i <= n; i++)
        scanf("%d", &p[i]);
 
        int mx = 0;
        int pos = -1;
 
        for (int i = 1; i < n; i++) {
            if (p[i] > mx) mx = p[i];
            if (mx == i) {
                pos = i;
                break;
            }
    }
 
if (pos != -1) {
    int temp = p[pos];
    p[pos] = p[n];
    p[n] = temp;
}
 
for (int i = 1; i <= n; i++)
printf("%d%c", p[i], i == n ? '
' : ' ');
}
 
return 0;
}