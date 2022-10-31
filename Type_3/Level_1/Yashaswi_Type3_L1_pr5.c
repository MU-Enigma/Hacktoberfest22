#include <stdio.h>
#include <string.h>

void print(char * init_string){
  for(int M = strlen(init_string) - 1; M >= 0; M--){
    printf("%c",init_string[M]);
  }
}
int main(){
  char init_string[105]= "";
  scanf("%[^\n]init_string", init_string);
  print(init_string);
  return 0;
 }
