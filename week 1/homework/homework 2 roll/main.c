#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, sum, sum1, counter = 1;
    srand(time(NULL));
    a = 1 + rand() % 6;
    b = 1 + rand() % 6;
    sum = a +b;
    printf("%d\t%d\t%d\n", a, b, sum);
    if(sum == 7 || sum == 11) {
        printf("You win.\n");
    } else if(sum == 2 || sum == 3|| sum == 12){
        printf("You lost.\n");
    } else {
        printf("Your point is: %d\nplease try again.\n", sum);
        while (1){
            a = 1 + rand() % 6;
            b = 1 + rand() % 6;
            sum1 = a +b;
            counter++;
            printf("%d\t%d\t%d\n", a, b, sum1);
            if(sum == sum1){
                printf("you win\n");
                break;
            } else if (sum1 == 7){
                printf("you lost\n");
                break;
            }
        }
    }
    printf("\n%d\n", counter);
    return 0;
}
