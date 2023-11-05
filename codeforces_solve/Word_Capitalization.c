#include <stdio.h>
#include <ctype.h>
int main(){
    char letter[1000];
    scanf("%s",letter);
    if(letter[0]>=97 && letter[0]<=122){
        letter[0]=letter[0]-32; // protita upper and lower case er difference 32
        printf("%s",letter);
    }
    else   printf("%s",letter);
    
    return 0;
}