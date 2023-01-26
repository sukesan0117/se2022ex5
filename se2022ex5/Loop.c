#include <stdio.h>
int main(void) {
  int i, count;
  count = 0;
  for (i = 0; i < 10; i++) {
    count++;
  }
  printf("%d", count);
  return (0);
}