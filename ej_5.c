#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);

  if(n < 0 || m < 0) {
     printf("Solo numeros positivos\n");
return 1;
  }
}