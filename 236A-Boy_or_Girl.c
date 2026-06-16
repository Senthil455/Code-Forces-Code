#include<stdio.h>
int main(){
    char s[100];
    scanf("%s",s);
    int count[26]={0};
    for(int i=0;s[i]!='\0';i++){
        count[s[i]-'a']++;
    }
    int distinct=0;
    for(int i=0;i<26;i++){
        if(count[i]>0){
            distinct++;
        }
    }
    if(distinct%2==0){
        printf("CHAT");
    }else{
        printf("IGNORE");
    }
    return 0;
}