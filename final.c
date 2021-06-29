#include <stdio.h>

int outline(int, int, char);

int main(void) {
  printf(".................Tic-Tac-Toe.............\n");
  char x,y,z,a[3][3]={'A','B','C','D','E','F','G','H','I'};
  int i,j,n,b[9]={0,0,0,0,0,0,0,0,0};
  printf("Users can type an alphabet as their symbol and \n can choose 1-9 places\n");
  printf("User 1 Symbol:- ");
  scanf("%c", &x);
  printf("User 2 Symbol:- ");
  scanf("%c", &y);
  i=1;
  j=1;
  z='x';
  outline(i,j,z);

  return 0;
}

int outline(int i, int j, char z) {
  char a[3][3]={'A','B','C','D','E','F','G','H','I'};
  a[i][j]='z';
  printf("\n      _________________\n");
  printf("     |     |     |     | \n");
  printf("     |  %c  |  %c  |  %c  | \n", a[0][0], a[0][1], a[0][2]);
  printf("     |_____|_____|_____| \n");
  printf("     |     |     |     | \n");
  printf("     |  %c  |  %c  |  %c  | \n", a[1][0], a[1][1], a[1][2]);
  printf("     |_____|_____|_____| \n");
  printf("     |     |     |     | \n");
  printf("     |  %c  |  %c  |  %c  | \n", a[2][0], a[2][1], a[2][2]);
  printf("     |_____|_____|_____| \n");
  return 0;
}
