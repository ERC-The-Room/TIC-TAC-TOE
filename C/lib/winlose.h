// Win Lose Conditions
int winlose()
{
  for (int i = 0; i < 3; i++)
  {
    if ((a[i][0] == a[i][1]) && (a[i][0] == a[i][2]))
      return 1;
  }
  for (int i = 0; i < 3; i++)
  {
    if ((a[0][i] == a[1][i]) && (a[0][i] == a[2][i]))
      return 1;
  }
  if ((a[0][0] == a[1][1]) && (a[0][0] == a[2][2]) || (a[0][2] == a[1][1]) && (a[0][2] == a[2][0]))
    return 1;
  else
    return 0;
}
