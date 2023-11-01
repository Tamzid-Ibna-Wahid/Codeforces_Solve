#include <stdio.h>
#include<math.h>
int main(){
    double a,b,c,R1,R2;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(b*b-4*a*c<0 || a==0){
        printf("Impossivel calcular\n");
    }
    else{
R1=(-b+sqrt(b*b-4*a*c))/(2*a);
R2=(-b-sqrt(b*b-4*a*c))/(2*a);
printf("R1 = %0.5f\n",R1);
printf("R2 = %0.5f\n",R2);
    }
    return 0;
}
//  10.0 20.1 5.1

// R1 = -0.29788
// R2 = -1.71212

// 0.0 20.0 5.0

// Impossivel calcular