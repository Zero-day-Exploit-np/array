#include<stdio.h>
#include<string.h>
int main(){
char str_a[]="hello";
int size=strlen(str_a);
char str_b[size];
for(int i=0; str_a[i]!='\0';i++){
str_b[i]=str_a[i];
}
str_b[size]='\0';
printf("%s",str_b);
return 0;
}