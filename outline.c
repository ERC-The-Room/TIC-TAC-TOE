#include <stdio.h>

int main(void) {
  printf(".................Tic-Tac-Toe.............\n");
  char a[9]={'A','B','C','D','E','F','G','H','I'};
  printf("      _________________\n");
  printf("     |     |     |     | \n");
  printf("     |  %c  |  %c  |  %c  | \n", a[0], a[1], a[2]);
  printf("     |_____|_____|_____| \n");
  printf("     |     |     |     | \n");
  printf("     |  %c  |  %c  |  %c  | \n", a[3], a[4], a[5]);
  printf("     |_____|_____|_____| \n");
  printf("     |     |     |     | \n");
  printf("     |  %c  |  %c  |  %c  | \n", a[6], a[7], a[8]);
  printf("     |_____|_____|_____| \n");
  return 0;
}
