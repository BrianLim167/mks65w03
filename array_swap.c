#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i;

  srand( time(NULL) );
  
  int a[10];
  for ( i=0 ; i<10 ; i++ ){
    if ( i == 9 ){ a[i] = 0; }
    else { a[i] = rand(); }
    printf("a[%d]: %d\n", i, a[i]);
  }

  printf("\n============\n");
  
  int * p;
  
  int b[10];
  for ( i=0 ; i<10 ; i++ ){
    p = &a[9-i];
    b[i] = *p;
    printf("b[%d]: %d\n", i, b[i]);
  }
    
  
  return 0;
}
