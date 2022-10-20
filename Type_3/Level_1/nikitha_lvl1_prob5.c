#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char *a, char*b){
    char temp=*a;
    *a=*b;
    *b=temp;
}

void string_reversal(char *s){
    int n=strlen(s);
    for(int i=0;i<n/2;i++){
        swap(&s[i],&s[n-i-1]);
    }
}

int main(){
    char* s=(char*)malloc(105*sizeof(char));
    scanf("%s",s);
    string_reversal(s);
    printf("%s",s);
}