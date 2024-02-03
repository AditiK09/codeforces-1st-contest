
#include<stdio.h>
#include<string.h>
int main(){
int s;
char str[200];
gets(str);
s=strlen(str);
int i=0;
while(i<s){
if(str[i]=='.'){
printf("0");
i+=1;
}
  if (str[i] == '-' && str[i+1] == '.'){
    printf("1");
    i+=2;
}
 
 if(str[i] == '-' && str[i+1] == '-') {
        printf("2");
        i+=2;
   }
}
 
    return 0;
}