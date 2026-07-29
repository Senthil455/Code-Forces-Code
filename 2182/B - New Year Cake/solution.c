#include <stdio.h>
 
int countLayers(int a, int b, int whiteTop) {
    int layers = 0;
    int size = 1;
    int whiteTurn = whiteTop;
 
    while (1) {
        if (whiteTurn) {
            if (a < size) break;
            a -= size;
        } else {
        if (b < size) break;
        b -= size;
    }
 
layers++;
size *= 2;
whiteTurn = !whiteTurn;
}
 
return layers;
}
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
 
        int ans1 = countLayers(a, b, 1); // top is white
        int ans2 = countLayers(a, b, 0); // top is dark
 
        printf("%d
", ans1 > ans2 ? ans1 : ans2);
    }
 
return 0;
}