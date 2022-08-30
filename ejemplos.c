#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void to_lower_case(char *s) {
  int i = 0;
  while (s[i] != 0) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] += 32;
    }
    i++;
  }
}

int main(int argc, char *argv[]) {
  printf("%s\n", argv[1]);
  tolower(argv[1]);
  printf("%s\n", argv[1]);
}

// double roots(double a, double b, double c) {
//   //codigo que aplica la formula de la cuadratica
//   double discriminant = b*b - 4*a*c;
//   double root = sqrt(discriminant);
//   double x1 = (-b + root) / (2*a);
//   double x2 = (-b - root) / (2*a);
//   return x1;
// }
//
// int main(void) {
//   double a = 1;
//   double b = 0;
//   double c = -3;
//   printf("%.2f\n", roots(a, b, c));
//   return 0;
// }

// void swap(int a, int b);
// void swap(int array[], int i, int j);

// int j(void); // declaracion de una funcion
//
// int suma(int a, int b) {
//   return a + b;
// }
//
// void to_lower(char *s);
//
// int f(void) {
//   printf("%s\n", "tehuel"); //side effect
//   return 0;
// }
//
// int g(void) {
//
// }
//
// int h(void) {
//
// }
//
// int main(void) {
//
// }
