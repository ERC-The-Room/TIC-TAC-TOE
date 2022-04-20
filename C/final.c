char a[3][3] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
#include "./funct.h"

int main(void)
{
  char b[3][3] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'}, usym[2] = {'X', 'O'}, inp;
  int x_axis, y_axis, n = 0, m, out;
  printf("                  .........Tic-Tac-Toe.........\n");
  outline(0, 0, 'A');
  printf("\nUsers can type an alphabet as their symbol and can choose 1-9 places\n X for User A and O for User B\nYou are recommended to Turn On Caps Lock.\n");
turn:
  inp = uinp();
  m = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (inp == b[i][j])
      {
        x_axis = i;
        y_axis = j;
        if (verification(a[i][j]) == 1)
          goto turn;
        a[i][j] = usym[n % 2];
        out = a[i][j];
        break;
      }
      else if (inp != b[i][j])
      {
        m++;
        if (m == 9)
        {
          printf("The position does not exist.\n");
          goto turn;
        }
      }
    }
  }
  outline(x_axis, y_axis, out);
  if (winlose() == 1)
    printf("You win");
  else if (n == 8)
    printf("Games Over Now");
  else
  {
    n++;
    goto turn;
  }
  
  printf("\nEnter a number to close: ");
  scanf("%d", &inp);
  inp = inp - inp;
  return inp;
}
