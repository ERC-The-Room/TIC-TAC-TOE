
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
