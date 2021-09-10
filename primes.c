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
double n = getreal();
double cp = 2;
double sb = (1 + occ);
while ((n > 0)) {
double found = 0;
double cf1 = 2;
double cf1s = (cf1 * cf1);
while ((cf1s <= cp)) {
double cf2 = 2;
double pr = (cf1 * cf2);
while ((pr <= cp)) {
if ((pr == cp)) {
found = 1;
}
cf2 = (cf2 + 1);
pr = (cf1 * cf2);
}
cf1 = (cf1 + 1);
cf1s = (cf1 * cf1);
}
if ((found == 0)) {
putreal (cp);
n = (n - 1);
}
cp = (cp + 1);
}
return 0; 
}   