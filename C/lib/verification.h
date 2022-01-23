// Input Verification
int verification(char inp)
{
  if (inp == 'X' || inp == 'O')
  {
    printf("The place has already been taken choose again.\n");
    return 1;
  }
  else
    return 0;
}