#include <stdio.h>

int main(int argc, char *argv[]) {
  switch (argv[1][0]){
    case 'u':
      printf("Updating...\n");
      break;
    case 's':
      printf("Starting...\n");
      break;
    case 't':
      printf("Self testing...\n");
      break;
    default:
      printf("SEMC CLI\n");
  }
  return 0;
}
