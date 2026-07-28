#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        long long k, x;
        scanf("%lld %lld", &k, &x);
 
        printf("%lld
", k * x + 1);
    }
 
return 0;
}