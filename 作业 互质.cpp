#include <stdio.h>
int main()
{
	int m ,n,t ;
	t=1;
	printf("����m,n��ֵ��");
	scanf("%d%d", &m,&n);
	    while(t % m != 0 || t % n != 0)
	    {
		t = t + 1;
	    }
	    printf("��С������Ϊ %d", t);
	    return 0;
}
