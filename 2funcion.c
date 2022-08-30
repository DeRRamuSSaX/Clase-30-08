#include <stdio.h>

char saludar(char *s) {
  printf("Hola, %s\n", s);
};

int main(int argc, char *argv[]) {
  char *s = argv[1];
  saludar(s);
  return 0;
}
