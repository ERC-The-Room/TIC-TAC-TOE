

int verification(x) {
  if (x==X || x==O) {
    printf("The place has already been taken\n");
    return 1;
  }
  else return 0;
}
