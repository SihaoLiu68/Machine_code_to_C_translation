#include <stdio.h>
#include <stdlib.h>

double getreal() {
 double a; 
 char ch;
 if(scanf("%lf", &a) == 0) {
 printf("Error: cannot enter non-numeric input.\n"); exit(1); 
} else if(scanf("%c", &ch) == EOF) { 
 printf("Error: unexpected end of input.\n"); exit(1); 
} 
 return a; 
}
void putreal(double a) {
 printf("%f\n", a); 
}
double divide(double x, double y) {
 if(y == 0) { 
  printf("Error: cannot divide by 0.\n"); 
  exit(1); 
} 
  return x / y; 
}

int main() {
putreal (foo);
return 0; 
}   