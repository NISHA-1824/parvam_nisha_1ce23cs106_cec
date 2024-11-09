#include<stdio.h.>
struct student
{
    int roolno;
    float marks;
}s1;
int main(){
    struct student s;
    s.roolno=45;
    s.marks=6.7;
    printf("%d",s.roolno);
    printf("%f",s.marks);
}
