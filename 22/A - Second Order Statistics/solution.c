#include <stdio.h>
#include <limits.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int a[100];
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
 
int min = INT_MAX;
for (int i = 0; i < n; i++) {
    if (a[i] < min)
    min = a[i];
}
 
int second = INT_MAX;
for (int i = 0; i < n; i++) {
    if (a[i] > min && a[i] < second)
    second = a[i];
}
 
if (second == INT_MAX)
printf("NO
");
else
printf("%d
", second);
 
return 0;
}