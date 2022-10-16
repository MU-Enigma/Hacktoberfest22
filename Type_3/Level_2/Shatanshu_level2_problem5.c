#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ExpCal(char * s){
    int len = strlen(s)+3;
    int *num = malloc(sizeof(int)*len/2);
    int total = 0, idx = 0, i = 0,j = 0;
    char *stack = malloc(len);
    while ( s[i] ){
        switch ( s[i] ){
            case '+': case '-':
                stack[++j]=s[i];
                break;
            case '*': 
                i++;
                while( s[i] == ' ' ){
                    i++;
                }
                while( s[i] >= '0' && s[i] <= '9' ){
                    int n = s[i++] - '0';
                    total = total*10+n;
                }
                num[++idx] = total;
                total = 0;
                i--;
                num[idx-1] = num[idx-1]*num[idx];
                idx--;
                break;
            case '/':
                i++;
                while( s[i] == ' ' ){
                    i++;
                }
                while( s[i] >= '0' && s[i] <= '9'){
                    int n = s[i++] - '0';
                    total = total*10+n;
                }
                num[++idx] = total;
                total = 0;
                i--;
                num[idx-1] = num[idx-1]/num[idx];
                idx--;
                break;
            case '0' ... '9':
                while(s[i] >= '0' && s[i] <= '9'){
                    int n = s[i++]-'0';
                    total = total*10+n;
                }
                num[++idx] = total;
                total=0;
                i--;
                break;
        }
        i++;            
    }
    int tmp = j;
    j = 1;
    idx = 1;
    while(j <= tmp){ 
        if(stack[j] == '+'){
            num[idx+1] = num[idx]+num[idx+1];
        }
        else{
            num[idx+1] = num[idx]-num[idx+1];
        }
        idx++;
        j++;
    }
    return num[idx];
}
int main(){
    char s[] = " ";
    printf("Enter the expression to calculate\n");
    scanf("%[^\n]s", s);
    printf("%d\n", ExpCal(s));
    return 0;
}