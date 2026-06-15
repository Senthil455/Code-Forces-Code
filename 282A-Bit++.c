#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x = 0;
    for(int i=0;i<n;i++){
        char s[10];
        scanf("%s",s);
        if(s[1]=='+'){
            x++;
        }else{
            x--;
        }
    }
    printf("%d",x);
    return 0;
}
