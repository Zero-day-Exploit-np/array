#include<stdio.h>
#include<string.h>
int main(){
char str1[]="Hello world";
int size=strlen(str1);
int count=0;
for(int i=0; i<size; i++){
   if(str1[i]==' '){
       count++;
     for(int j=i; j<size-count; j++){
        str1[j]=str1[j+1];
    }
   }

}
printf("%s",str1);

return 0;
}