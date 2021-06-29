#include <stdio.h>

int outline(int, int, char);
char a[3][3]={'A','B','C','D','E','F','G','H','I'};

int main(void) {
  printf(".........Tic-Tac-Toe.........\n");
  char sym_x, sym_y,sym,inp;
  int x_axis,y_axis,n;
  outline(1,1,'A');
  printf("Users can type an alphabet as their symbol and can choose 1-9 places\n");
  printf("User 1 Symbol:- ");
  scanf("%c", &sym_x);
  printf("User 2 Symbol:- ");
  scanf(" %c", &sym_y);
  printf("Enter the position in Capital: ");
  scanf(" %c", &inp);
  for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
      if (inp==a[i][j]) {
        x_axis=i;
        y_axis=j;
        break;
      }
    }
  }
  sym='x';
  outline(x_axis,y_axis,sym);

  return 0;
}

int outline(int i, int j, char z) {
  a[i][j]=z;
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
