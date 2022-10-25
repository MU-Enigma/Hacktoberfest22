#include <stdio.h>
#define MAX_BUFFER_SIZE 105

int main () {

  char str[MAX_BUFFER_SIZE];

  char c;
  int i = 0;
  while ((c = getchar()) != '\n') {
    str[i++] = c;
  }

  i--;

  while (i >= 0) {
    putchar(str[i--]);
  }

  return 0;
}
