#include<stdio.h>
void add(){
    static int c=1;
    printf("%d",c);
}
int main(){
    add();
    add();
}