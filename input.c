#include <stdio.h>

int main(void) {
  int a,b,x,e,f,g,h,i,j,k,l,m;
  for (int i=0; i<9;i++){
  printf("Users can type 1 or 0 as their inputs and \n can choose 1-9 places\n");
  printf("\nUser 1:- ");
  scanf("%d", &a);
  printf("\nWhich place you want to enter(1-9):-");
  scanf("%d", &x);
  switch(x){
    case 1:
     e=x;
     break;
    case 2:
     f=x;
     break;
    case 3:
     g=x;
     break;
    case 4:
     h=x;
     break;
    case 5:
     i=x;
     break;
    case 6:
     j=x;
     break;
    case 7:
     k=x;
     break;
    case 8:
     l=x;
     break;
    case 9:
     m =x;
     break;
  }
  printf("     _____________________ \n"         );
  printf("     |   %d  |  %d  |  %d   | \n", e, f, g);
  printf("     |______|_____|______| \n");
  printf("     |   %d  |  %d  |  %d   | \n", h, i, j);
  printf("     |______|_____|______| \n");
  printf("     |   %d  |  %d  |  %d   | \n", k, l, m);
  printf("     |______|_____|______| \n");
  }

  return 0;
}
