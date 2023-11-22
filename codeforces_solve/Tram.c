#include <stdio.h>
int main(){
    int n,exit,enter,min,a,b;
    scanf("%d",&n);
     scanf("%d%d",&exit,&enter);
     min=enter;
    for(int i=1;i<n;i++){
        scanf("%d%d",&a,&b);
        enter=enter-a;
        enter=enter+b;
        if(min<enter)min=enter;  
    }
    printf("%d",min);
    return 0;
}