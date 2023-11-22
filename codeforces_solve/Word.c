#include <stdio.h>
#include <string.h>
 #include<ctype.h>

int main(){
    int count=0,x;
    char word[100],ch;
   gets(word);
    x=strlen(word);
    for(int i=0;word[i]!='\0';i++){
        if(word[i]>=92 && word[i]<=122){
            count++;
        }
    }
    if(count>=(float)x/2){
         for(int i=0;word[i]!='\0';i++){
            ch=word[i];
        word[i]=tolower(ch);
         }
     puts(word);
    }
    else{
         for(int i=0;word[i]!='\0';i++){
             ch=word[i];
        word[i]=toupper(ch); 
        }
    puts(word);
    }
   
    return 0;
}