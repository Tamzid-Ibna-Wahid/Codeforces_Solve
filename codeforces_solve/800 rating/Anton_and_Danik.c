#include <stdio.h>
int main(){
   int n,x=0;
    scanf("%d",&n);
   char letter[n];
   scanf("%s",letter);
   for(int i=0;i<n;i++){
    if(letter[i]=='A'){
        x++;
    }
   }
   if(x>(n-x)){
    printf("Anton");
   }
   else if(x<(n-x)){
    printf("Danik");
   }
   else printf("Friendship");
    return 0;
}