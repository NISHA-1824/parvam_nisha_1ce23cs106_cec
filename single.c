#include<stdio.h.>
int main(){
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    int result=0;
    for(int i=0;i<n;i++){
        result=result^arr[i];
    }
    printf("%d",result);
}

