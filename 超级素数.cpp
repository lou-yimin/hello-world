//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。 
#include <stdio.h>
int main(){
	int x[100000] ={},A,a,i,b,c,h,m,n,q,z,w[100000]={},f=0,y=0,d,p;
	for(a=100;a<10000;a++){
	m=0;n=0;q=0;b=0;c=0;
	for(i=0;i<6;i++){
		x[i]=0;
	}
	A=a;
	x[0] = A % 10;
	for(i=1;i<6;i++){
		x[i] =(A /10) % 10;
		A=A /10;
		}
	for(i=0;i<6;i++){
		b=b+x[i];
		c=c+(x[i]*x[i]);
	}
	int t=0;
	for(h=2;h<a-1;h++){
		if(a % h ==0){
		t++;
		}
	}
	if(t ==0){
		m=a;
	}
	t=0;
	for(h=2;h<b-1;h++){
		if(b % h ==0){
		t++;
		}
	}
	if(t==0){
		n=b;
	}
	t=0;
	for(h=2;h<c-1;h++){
		if(c % h ==0){
		t++;
		}
	}
	if(t==0){
		q=c;
	}
	if(m!=0 &&n!=0 &&q!=0){
		w[f]=a;
		f++;
		}
}
for(d=0;d<f;d++){
	y=(y+w[d]);
}
	p=y/(f);
	
	printf("超级素数：\n"); 
	for(d=0;d<f;d++){
		printf("%d\n",w[d]);
	}
	
	printf("平均值：%d",p);

	return 0;
		
}
