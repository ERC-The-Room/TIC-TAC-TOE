#include<stdio.h>

int main(void) {
  printf(".................Tic-Tac-Toe.............\n");
  int a[9]={'1','2','3','4','5','6','7','8','9'};
 
  printf("     ________________________\n");
  printf("     |                       |\n");
  printf("     |    %c   |  %c  |  %c     | \n", a[0], a[1], a[2]);
  printf("     |  ______|_____|______  | \n");
  printf("     |    %c   |  %c  |  %c     | \n", a[3], a[4], a[5]);
  printf("     |  ______|_____|______  | \n");
  printf("     |    %c   |  %c  |  %c     | \n", a[6], a[7], a[8]);
  printf("     |        |     |        | \n");
  printf("     |_______________________|\n");

 
  return 0;
}