#include <stdio.h>
#include <string.h>
void print(char * s){
  for(int i = strlen(s) - 1; i >= 0; i--){
    printf("%c",s[i]);
  }
}
int main(){
  char s[105]= "";
  scanf("%[^\n]s", s);
  print(s);
  return 0;
 }