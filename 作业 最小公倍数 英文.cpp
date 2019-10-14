#include <stdio.h>
int main()
{
	int m ,n,t ;
	t=1;
	printf("input m,n£º");
	scanf("%d%d", &m,&n);
	    while(t % m != 0 || t % n != 0)
	    {
		t = t + 1;
	    }
	    printf("min %d", t);
	    return 0;
}
