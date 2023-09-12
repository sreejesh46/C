#include <stdio.h>
int main(){
        int a,b,choice,add,sub,product,division,result;
        printf("Enter 2 numbers: ");
        scanf("%d%d",&a,&b);
        printf("[ 1 ] for ADDITION \n[ 2 ] for SUBSTRACT\n[ 3 ] for MULTIPLICATION\n[ 4 ] for DIVISION\n ENTER YOUR CHOICE\n");
        scanf("%d",&choice);
        if(choice==1){
                add = a + b;
                printf("SUM OF 2 NUMBERS: %d\n",add);
        }else if(choice==2){
                sub = a - b;
                printf("SUBTRACTION OF 2 NUMBERS: %d\n",sub);
        }else if(choice==3){
                product = a * b;
                printf("PRODUCT OF 2 NUMBERS: %d\n",product);
        }else if(choice==4){
                division = a / b;
                printf("DIVISION OF 2 NUMBERS: %d\n",division);
        }else{
                printf("***YOU ARE NOW WORTHY ****\n");
        }
         return 0;
}