#include<stdio.h>
int u( int a ){
    int arr[4];
    for(int i=0;i<4;i++){
        arr[i]=a%10;
        a=a/10;
    }
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if (arr[i]==arr[j]&& i!=j)
                return 0;
        }
    } 
    return 1;
}

int main() {
int n;
int q;
scanf("%d",&n);
for(int i=n+1;i<9000;i++){
   q = u(i);
   if (q==1){
       printf("\n%d",i);
       break;
   }
}
   
    return 0;
}