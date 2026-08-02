#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int steps=0;
    while(n>0){
        n-=5;
        steps++;
    }
    printf("%d",steps);
    return 0;
}