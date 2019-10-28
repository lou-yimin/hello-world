//Ωªªª≈≈–Ú
#include <stdio.h>
int main() { 
  int x[3] = {}, i,j;
  while(1) {
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    for(j=0;j<2;j++){
    	for(i=j;i<2;i++) {
    		 if( x[j] > x[i+1]) {
  	    int temp = x[j];
  	    x[j] = x[i+1];
  	    x[i+1] = temp;
      }
    }
    	
	}
    		printf(" %d, %d, %d", x[0], x[1], x[2]);
 }
  return 0;
}
