#include <stdio.h>
// Outline
int outline(int i, int j, char z) {
  a[i][j]=z;
  printf("\n                        _________________\n");
  printf("                       |     |     |     | \n");
  printf("                       |  %c  |  %c  |  %c  | \n", a[0][0], a[0][1], a[0][2]);
  printf("                       |_____|_____|_____| \n");
  printf("                       |     |     |     | \n");
  printf("                       |  %c  |  %c  |  %c  | \n", a[1][0], a[1][1], a[1][2]);
  printf("                       |_____|_____|_____| \n");
  printf("                       |     |     |     | \n");
  printf("                       |  %c  |  %c  |  %c  | \n", a[2][0], a[2][1], a[2][2]);
  printf("                       |_____|_____|_____| \n\n");
  return 0;
}

// User Input
int uinp() {
  char inp;
  printf("Enter the position in Capital: ");
  scanf(" %c", &inp);
  return inp;
}

// Input Verification
int verification(char inp) {
  if (inp=='X' || inp=='O') {
    printf("The place has already been taken choose again.\n");
    return 1;
  }
  else return 0;
}

// Win Lose Conditions
int winlose() {
  for (int i=0; i<3; i++) {
    if ((a[i][0]==a[i][1]) && (a[i][0]==a[i][2])) return 1;
  }
  for (int i=0; i<3; i++) {
    if ((a[0][i]==a[1][i]) && (a[0][i]==a[2][i])) return 1;
  }
  if ((a[0][0]==a[1][1]) && (a[0][0]==a[2][2]) || (a[0][2]==a[1][1]) && (a[0][2]==a[2][0])) return 1;
  else return 0;
}
