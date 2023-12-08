#include <stdio.h>
#include<limits.h>
int main(){
    int n,max_index=0,min_index=100;
    scanf("%d",&n);
    int h[n];
   for(int i=0;i<n;i++){
    scanf("%d",&h[i]);
   }
   int min=INT_MAX,max=0;
   for(int j=0;j<n;j++){
     if(max<h[j]){
        max=h[j];
        max_index=j;
        }
     if(min>=h[j]){
        min=h[j];
        min_index=j;
   }
   }
   if(max_index<min_index)printf("%d",max_index+n-1-min_index);
   else printf("%d",max_index+n-2-min_index);
    return 0;
}