#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n;
        scanf("%d", &n);
 
        int cnt = 0;
        int x = 1;
 
        while (cnt < n) {
            if (x % 3 != 0) {
                printf("%d", x);
                cnt++;
                if (cnt < n) printf(" ");
            }
        x++;
    }
printf("
");
}
 
return 0;
}