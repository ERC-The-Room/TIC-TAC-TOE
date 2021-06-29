#include <stdio.h>

int main(void) {
  char x,y,a[9]={'A','B','C','D','E','F','G','H','I'};
  int n,b[9]={0,0,0,0,0,0,0,0,0,0};
  for (int i=0; i<9;i++){
  printf("Users can type an alphabet as their symbol and \n can choose 1-9 places\n");
  printf("User 1 Symbol:- ");
  scanf("%d", &x);
  printf("User 1 Symbol:- ");
  scanf("%d", &y);
  return 0;
}
