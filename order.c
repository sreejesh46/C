//using switch
#include <stdio.h>
#include <string.h>
int main() {
    int choice;
    printf("SELECT YOUR ORDER FROM THE MENU\n");
    printf("[1] FRIED RICE\n [2] CHICKEN BIRIYANI\n [3] MANDHI\n [4] SHAWARMA \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("YOU SELECTED FRIED RICE.....\n");
    break;
    case 2:
        printf("YOU SELECTED CHICKEN BIRIYANI.....\n");
    break;
    case 3:
        printf("YOU SELECTED MANDHI.....\n");
    break;
    case 4:
        printf("YOU SELECTED SHAWARMA.....\n");
    break;
    default:
        printf("***YOU ARE NOW WORTHY ****\n");
        break;
    }
    return 0;
}