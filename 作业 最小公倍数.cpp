#include <stdio.h>
int main()
{
	int m,n,t;
	printf("����m��n");
	scanf("%d%d",&m,&n);
	while(m % n != 0){
    	t = m % n;
    	m = n;
    	n = t;
    }
    if(n==1)
    printf("����");
    else
    printf("������");
    return 0; 
	 
	
		  
}
