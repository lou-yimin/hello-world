//С���� 5 �����ֿ�Ƭ������ֱ�Ϊ���� 1�� 2�� 3�� 6�� 9��С�������� 5 �����ֿ�Ƭ���һ������ 5 λ
//�����������λ����_______��
//��̣���������5�����֣����������Ϊ����5λ������������������5λ�����������ERROR�� 
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
