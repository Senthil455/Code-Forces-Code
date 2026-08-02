#include <stdio.h>
 
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
 
    char grid[55][55];
 
    int top = 55, bottom = -1;
    int left = 55, right = -1;
 
    for (int i = 0; i < n; i++) {
        scanf("%s", grid[i]);
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                if (i < top) top = i;
                if (i > bottom) bottom = i;
                if (j < left) left = j;
                if (j > right) right = j;
            }
    }
}
 
for (int i = top; i <= bottom; i++) {
    for (int j = left; j <= right; j++) {
        printf("%c", grid[i][j]);
    }
printf("
");
}
 
return 0;
}