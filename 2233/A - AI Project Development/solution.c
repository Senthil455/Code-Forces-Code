#include <stdio.h>
 
int ceil_div(int a, int b) {
    return (a + b - 1) / b;
}
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n, x, y, z;
        scanf("%d %d %d %d", &n, &x, &y, &z);
 
        // Option 1: Nikita does not use AI
        int withoutAI = ceil_div(n, x + y);
 
        // Option 2: Nikita uses AI
        int withAI;
 
        // If Maxim alone finishes before AI setup ends
        if (x * z >= n) {
            withAI = ceil_div(n, x);
        } else {
        int remaining = n - x * z;
        withAI = z + ceil_div(remaining, x + 10 * y);
    }
 
printf("%d
", withoutAI < withAI ? withoutAI : withAI);
}
 
return 0;
}