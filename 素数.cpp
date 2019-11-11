//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//素数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位素数输出。如果不存在5位素数，则输出ERROR。 
#include <stdio.h>
int main(){
	int x[5]={},i,j,c=2;
	scanf("%d %d %d %d %d",&x[0],&x[1],&x[2],&x[3],&x[4]);
	for(i=0;i<4;i++){                                                
        for(j=i;j<4;j++){
			if(x[i]>x[j+1]){
				int t=x[i];
				x[i]=x[j+1];
				x[j+1]=t;
			}
		}
	}

 done: 
     c=2;
    while(x[i] % c ==0 && c>x[i]){
    printf("%d",x[i]);
    	
	}
	while (x[i] % c !=0){
		c=c+1;
	if(c>=x[i]){
		printf("%d",x[i]);
		break;
	}
	
		
	}
    while(x[i] % c ==0){
	if(c <x[i]){
		i=i-1;
		goto done;
	}
	if(c >= x[i]){
		i=i-1;
		goto done;
		
	}
    }
    return 0;
}
