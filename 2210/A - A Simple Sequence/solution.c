#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n;
        scanf("%d", &n);
 
        printf("2 ");
 
        for (int i = n; i >= 3; i--) {
            printf("%d ", i);
        }
 
    printf("1
");
}
 
return 0;
}