#include <stdio.h>
int main(){
    int t,h,m,h_rem,m_rem;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d%d",&h,&m);
        h_rem=24-h-1;
        m_rem=60-m;
        printf("%d\n",h_rem*60+m_rem);
    }
    return 0;
}