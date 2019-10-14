#include <stdio.h>
int main()
{
	int m,n,t;
	printf("input");
	scanf("%d%d",&m,&n);
	while(m % n != 0){
    	t = m % n;
    	m = n;
    	n = t;
    }
    if(n==1)
    printf("coprime");
    else
    printf("don't coprime'");
    return 0; 
	 
	
		  
}
