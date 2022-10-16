#include <stdio.h>
#include <string.h>
int main(){
  char s[105]= "";
  printf("Enter string: ");
  scanf("%[^\n]s", s);
  for(int i = strlen(s) - 1; i >= 0; i--){
    printf("%c", s[i]);
  }
  return 0;
 }
