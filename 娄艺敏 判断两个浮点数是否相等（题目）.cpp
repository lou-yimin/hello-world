//实现代码判断2个float变量相等,改条件语句，另条件执行 
//误差精确到时小数点后5位
#include <stdio.h>
int main()
{
    float m = 1.78;
    float x = 1.779999, y = 2;
    float z = m / y, z1 = x / y;   //z=0.89  z1=0.8899995 
    z = (int)(z*100000+0.5);
    z = z/100000;
    z1 = (int)(z1*100000+0.5);
    z1 = z1/100000;
    if (z ==z1 ) {
    z = (m + x) / y;
    }    
    printf("Z is %.5f\n", z);
    printf("Z1 is %.5f\n", z1);
    return 0;
}
