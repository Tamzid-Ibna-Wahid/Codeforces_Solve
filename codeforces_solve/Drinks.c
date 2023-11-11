#include <stdio.h>
int main(){
    int n,x=0;
    scanf("%d",&n);
    int percent[n];
    for(int i=0;i<n;i++){
       scanf("%d",&percent[i]); 
    }
    for(int j=0;j<n;j++){
      x=x+percent[j];
    }
    float y=(float)x/n;  // x re float banaisi tai vag fol float aise
    printf("%f",y);
    return 0;
}