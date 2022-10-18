#include <stdio.h>
#include <stdlib.h>
#define BOARD_DIM 3 // EXTENDABLE TO ANY SIZE

#define DEF_P1 'X'
#define DEF_P2 'O'

struct Node {
  int x;
  struct Node *next;
};

typedef struct Node Node;

void print_board(char board[BOARD_DIM][BOARD_DIM]) {
  printf("\n\n");
  for (int i = -1; i < BOARD_DIM; i++) {
    if (i == -1)
      printf("\t");
    else
      printf("%u\t", i + 1);
    for (int j = -1; j < BOARD_DIM; j++) {
      if (i == -1){
        if (j > -1)
          printf("%u\t", j + 1);
      } else {
        if (j > -1)
          printf("%c\t", board[i][j]);
      }
    }
    printf("\n\n");
  }
  printf("\n");
}

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

char win_condition(char board[BOARD_DIM][BOARD_DIM], char c) {
   
  char flag = 1;
  // Wins can occur across diagonals
  for (unsigned int i = 0; i < BOARD_DIM; i++) {
      if (board[i][i] != c) {
        flag = 0;
        break;
      }
  }
  if (flag)
    return 1;

  flag = 1;

  for (unsigned int i = 0; i < BOARD_DIM; i++) {
      if (board[BOARD_DIM -1 -i][i] != c) {
        flag = 0;
        break;
      }
  }
  if (flag)
    return 1;
  
  // Wins can occur across full rows/columns.

  for (unsigned int i = 0 ; i < BOARD_DIM; i++) {
    flag = 1;
    for (unsigned int j = 0; j < BOARD_DIM; j++) {
      if (board[i][j] != c)
        flag = 0;
    }
    if (flag)
      return 1;
  }

  for (unsigned int i = 0 ; i < BOARD_DIM; i++) {
    flag = 1;
    for (unsigned int j = 0; j < BOARD_DIM; j++) {
      if (board[j][i] != c)
        flag = 0;
    }
    if (flag)
      return 1;
  }

  return 0;
}

// Add function for custom player symbols
char check_move(char board[BOARD_DIM][BOARD_DIM], unsigned int x, unsigned int y) {
  if (!(x >= 0 && x <= 2)) {
    return 1; 
  }
  if (!(y >= 0 && y <= 2)) {
    return 1;
  }
  if (board[x][y] != '\0')
    return 1;
  return 0;
}

int main () {

  printf("\n\nGive input as \"x y\" to fill in position\nat row number x and column number y.\n");
  unsigned int empty_cells = 9;
  char board[BOARD_DIM][BOARD_DIM];
  for (unsigned int i = 0; i < BOARD_DIM; i++) {
    for (unsigned int j = 0; j < BOARD_DIM; j++)
      board[i][j] = '\0';
  }

  unsigned int flag1 = -1;
  unsigned int x, y;
  Node *head;
  while (1) {
    print_board(board);
    if (!empty_cells) {
      printf("No winners!\n");
      break;
    }
    head = getInp();
    x = head->x;
    if (head->next != NULL){
      y = head->next->x;
    } else {
      printf("BAD MOVE.\n");
      continue;
    }
    --x; --y;
    if (check_move(board, x, y)) {
      printf("BAD MOVE.\n");
      continue;
    }
    if (flag1 == 1)
      board[x][y] = DEF_P1;
    else 
      board[x][y] = DEF_P2;

    if (flag1 == 1 && win_condition(board, DEF_P1)){
      print_board(board);
      printf("Player 2 wins.\n");
      break;
    } else if (flag1 == -1 && win_condition(board, DEF_P2)) {
      print_board(board);
      printf("Player 1 wins.\n");
      break;
    } 
    flag1 *= -1;
    empty_cells--;
  }
  
  return 0;
}
