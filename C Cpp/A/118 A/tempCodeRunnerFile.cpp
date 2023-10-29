
#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main(){
char s[100];
scanf("%s",s);
strlwr(s);
for(int i=0;i<strlen(s);i++){
    if (s[i] =='a' || s[i]=='e' || s[i]== 'o' || s[i]=='u' || s[i]=='i' || s[i]=='y'){
        printf("");
}   else{
        printf(".%c",s[i]);
}
 
}
 
 
return 0;}