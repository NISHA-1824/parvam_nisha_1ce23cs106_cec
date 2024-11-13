#include<stdio.h>
int isAutomorphic(int n,int square){
    while(n!=0){
        if(n%10!=square%10){
            return 0;
        }
        n=n/10;
        square=square/10;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int square=n*n;
    printf("%d",isAutomorphic(n,square));
}   
