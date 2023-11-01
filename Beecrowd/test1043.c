#include <stdio.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("Perimetro = %0.1f\n",a+b+c);
    }
    else{
        printf("Area = %0.1f\n",((a+b)/2)*c);
    }
    return 0;
}
/*6.0 4.0 2.0

Area = 10.0

6.0 4.0 2.1

Perimetro = 12.1*/