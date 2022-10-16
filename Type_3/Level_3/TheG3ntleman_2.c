#include <stdio.h>
#include <stdlib.h>

struct Node {
  int x;
  struct Node *next;
};

typedef struct Node Node;

Node *getInp() {
  // Setting up LL
  unsigned int num = 0;
  Node *head = malloc(sizeof(Node)), *t = head, *n;
  head->x = 0;
  head->next = NULL;

  // Processing input
  char c, in = 0, sign = 0;
  int number = 0;
  while (1) {
    c = getchar();
    if ((c >= '0' && c <= '9') || c == '-'){
      in = 1;
      if (c == '-') {
        sign = 1;
        continue;
      }
      number *= 10;
      number += c - '0'; 
    } else {
      if (in) {
        in = 0;
        num++;
        if (sign) {
          number *= -1;
        }
        t->x = number;
        n = malloc(sizeof(Node));
        t->next = n;
        n->x = 0;
        n->next = NULL;
        t = n;
      
        number = 0; in = 0, sign = 0;
      }
    }
    if (c == '\n' || c == EOF) {
      break;
    }
  }
  return head;
}

int main () {

  Node *t1 = getInp(), *t2;
  unsigned int count = 0;
  printf("[");
  while (t1->next != NULL) {
    t2 = t1->next;
    while (t2 != NULL) {
      if (t1->x > t2->x) 
        count++;
      t2 = t2->next;
    }
    if (count > 0 && t1->x > 0)
      count--;
    t1 = t1->next;
    if (t1->next == NULL)
      printf("%u", count);
    else
      printf("%u,", count);
    count = 0;
  }
  printf("]");

  return 0;
}
