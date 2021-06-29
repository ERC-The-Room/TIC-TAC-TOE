#include <stdio.h>

int syminput(int user) {
  char user_sym;
  printf("User %d Symbol:- ", user+1);
  scanf(" %c", &user_sym);
  return user_sym;
}
