#include<stdio.h>
#include<string.h>

int main(){
char str1[]="olo";
int check=1;
int size=strlen(str1);
char str2[size+1];
for(int i=0; i<size;i++){
str2[i]=str1[size-i-1];

}
str2[size]='\0';
for(int i=0; i<size;i++){
    if(str1[i]!=str2[i]){
        check=0;
        break;
    }

}
if(check){
    printf("Is palindrome");
}else{
        printf("Is not palindrome");

}
return 0;
}