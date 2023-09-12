#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,temp;
    printf("Enter 2 numbers: \n");
    scanf("%d%d",&a,&b);
    printf("BEFORE SWAPPING\n a:%d b:%d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("AFTER SWAPPING\n a:%d b:%d\n",a,b);
    return 0;
}