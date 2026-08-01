#include <stdio.h>
 
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
 
    char flag[100][101];
 
    for (int i = 0; i < n; i++) {
        scanf("%s", flag[i]);
    }
 
for (int i = 0; i < n; i++) {
    // Check if all characters in the row are the same
    for (int j = 1; j < m; j++) {
        if (flag[i][j] != flag[i][0]) {
            printf("NO
");
            return 0;
        }
}
 
// Check if adjacent rows have different colors
if (i > 0 && flag[i][0] == flag[i - 1][0]) {
    printf("NO
");
    return 0;
}
}
 
printf("YES
");
 
return 0;
}