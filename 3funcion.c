#include <stdio.h>
#include <stdlib.h>

int objeto(int a, int b, int c) {
  if (a == b && b == c) {
    printf("true\n");
  } else {
    printf("false\n");
  }
};

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  objeto(a, b, c);
  return 0;
}
