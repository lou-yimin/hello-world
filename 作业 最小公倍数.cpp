#include <stdio.h>
int main()
{
	int m,n,t;
	printf("输入m与n");
	scanf("%d%d",&m,&n);
	while(m % n != 0){
    	t = m % n;
    	m = n;
    	n = t;
    }
    if(n==1)
    printf("互质");
    else
    printf("不互质");
    return 0; 
	 
	
		  
}
