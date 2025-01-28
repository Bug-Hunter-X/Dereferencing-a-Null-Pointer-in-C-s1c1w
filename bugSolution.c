#include <stdio.h>

int main() {
  int x = 10;
  int *ptr = &x;

  //Check for null pointer
  if (ptr != NULL) {
    *ptr = 20;  
    printf("%d\n", x); 
  }
  else {
    printf("Error: Pointer is null\n");
  }

  return 0;
}