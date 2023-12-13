#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int i=0,j=0,k=0,large_index,seclarge_index,large=0,seclarge=0;
        int skill[4];
        while(i<4){
            scanf("%d",&skill[i]);
            i++;
        }
      for(j=0;j<4;j++){
        if(skill[j]>large){
          large=skill[j];
          large_index=j;
      }
      }
       for(k=0;k<4;k++){
        if(skill[k]>seclarge && skill[k]<skill[large_index]){
          seclarge=skill[k];
          seclarge_index=k;
      }
       }
      if((large_index<2 &&seclarge_index<2) ||(large_index>1&&seclarge_index>1))printf("NO\n");
      else printf("YES\n");
    }
    return 0;
}