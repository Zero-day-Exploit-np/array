#include<stdio.h>
int main(){
char str1[]="hiii";
char str2[]="hii";
int i;
for(i=0; str1[i]!='\0'&&str2[i]!='\0'; i++){
    if(str1[i]!=str2[i]){
        break;

    }
}
if(str1[i]<str2[i]){
       printf("str2 is greater the str1");
}else if(str1[i]>str2[i]){
        printf("str1 is greater the str2");
}else{
        printf("both string is same");
}
return 0;
}