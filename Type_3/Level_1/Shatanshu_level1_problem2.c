#include <stdio.h>
#include <stdlib.h>
int chknum(int n){
  int x = 0, sum = 0;
  while(n > 0){
    x = n%10;
    sum = sum + (x*x);
    n = n/10;
 }
  return sum;
 }
void happynumber(int n){
    int z = n;
    while(z != 1 && z != 4){
      z = chknum(z);
    }
    if(z == 1){
      printf("True\n");
    }
    else{
      if(z==4){
        printf("False\n");
      }
    }
  }
int main(){
  int n;
  scanf("%d", &n);
  happynumber(n);
  return 0;
 }