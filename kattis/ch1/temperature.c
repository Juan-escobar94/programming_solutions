#include <stdio.h>


/**
 * X is the point where A is 0,
 * Y is deg in B that equal a change 
 * of a single deg in A.
 * output: temp where both scales are the same
 * or "IMPOSSIBLE" or "ALL GOOD" (more than one)
 **/



int main () {
  int x, y, tempi; 
  double  tempf;
  scanf("%d %d", &x, &y);
  
  if (x == 0 && y == 1) printf("ALL GOOD");
  else if (y == 1) printf("IMPOSSIBLE");
  else if (x % (1 - y) != 0) {
      tempf = x / (1.0f - y); 
      printf("%f", tempf) ;
  } else {
      tempi = x / (1 - y); 
      printf("%d", tempi) ;
  }
  return 0;
}
