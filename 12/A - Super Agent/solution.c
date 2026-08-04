#include <stdio.h>
 
int main() {
    char a[3][4];
 
    for (int i = 0; i < 3; i++)
    scanf("%s", a[i]);
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] != a[2 - i][2 - j]) {
                printf("NO
");
                return 0;
            }
    }
}
 
printf("YES
");
return 0;
}