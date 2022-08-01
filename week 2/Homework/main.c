#include <stdio.h>
 /* write a recursive function that finds the power of the  given number.*/
/* write a recursive function that finds the power of the  given number.*/

int power(int x, int y){
    if (y != 1 ){
        return  x* power(x , y - 1);
    } else{
        return x ;
    }

}

 int main(){
 int x , y ;
     printf("enter your number: ");
     scanf("%d" , &x);
     printf("enter your power of number: ");
     scanf("%d" , &y);
     printf("result is %d " , power(x, y ));
      return 0;

 }
