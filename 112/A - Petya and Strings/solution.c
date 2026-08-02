#include<stdio.h>
int main(){
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    int i=0;
    while(s1[i]!='\0'){
        if(tolower(s1[i])<tolower(s2[i])){
            printf("-1");
            return 0;
        }
        if(tolower(s1[i])>tolower(s2[i])){
            printf("1");
            return 0;
        }
        i++;
    }
    printf("0");
    return 0;
}