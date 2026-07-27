#include <stdio.h>
#include <string.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n;
        scanf("%d", &n);
 
        int maxColor = n * n;
        int freq[10005];
        memset(freq, 0, sizeof(freq));
 
        int maxFreq = 0;
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                scanf("%d", &x);
                freq[x]++;
                if (freq[x] > maxFreq)
                maxFreq = freq[x];
            }
    }
 
if (maxFreq <= n * (n - 1))
printf("YES
");
else
printf("NO
");
}
 
return 0;
}