#include <stdio.h>
#include <string.h>
int main(){
    char s[101];
    scanf("%s",s);                       
int n=strlen(s);
for(int j=0;j<n/2;j++){            //bubble sort
for(int i=0;i<n-1-j;i=i+2){      
if(s[i]>s[i+2]){
    char temp=s[i];
    s[i]=s[i+2];
    s[i+2]=temp;
}
}
}
printf("%s",s);
    return 0;
}