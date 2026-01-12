#include<stdio.h>
int main(){
    int c=0;
char a[]="Hello this is string";
for(int i=0; a[i]!='\0'; i++){
    c++;
}
printf("size of the string is %d",c);
return 0;
}