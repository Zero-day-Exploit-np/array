#include<stdio.h>
#include<string.h>
int main(){
char str1[]="Hello world";
int size=strlen(str1);
for(int i=0; i<size; i++){
   if(str1[i]==' '){
       for(int j=i; j<size; j++){
           str1[j]=str1[j+1];
        }
        size--;
        i--;
   }

}
printf("%s",str1);

return 0;
}