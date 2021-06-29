#include <stdio.h>

int main(void) {
  printf(".................Tic-Tac-Toe.............\n");
  char a[3][3]={'A','B','C','D','E','F','G','H','I'};
  printf("      _________________\n");
  printf("     |     |     |     | \n");
  printf("     |  %c  |  %c  |  %c  | \n", a[0][0], a[0][1], a[0][2]);
  printf("     |_____|_____|_____| \n");
  printf("     |     |     |     | \n");
  printf("     |  %c  |  %c  |  %c  | \n", a[1][0], a[1][1], a[1][2]);
  printf("     |_____|_____|_____| \n");
  printf("     |     |     |     | \n");
  printf("     |  %c  |  %c  |  %c  | \n", a[2][0], a[1][1], a[2][2]);
  printf("     |_____|_____|_____| \n");
  return 0;
}
