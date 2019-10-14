#include <stdio.h>
int main()
{
	int m ,n,t ;
	t=1;
	printf("输入m,n的值：");
	scanf("%d%d", &m,&n);
	    while(t % m != 0 || t % n != 0)
	    {
		t = t + 1;
	    }
	    printf("最小公倍数为 %d", t);
	    return 0;
}
