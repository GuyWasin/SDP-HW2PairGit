#include <stdio.h>
#include <math.h>
#include <stdlib.h>


struct lotto{
    int first_reward;
};


   
void printLotto(int reward){
    //return random number 6 digits
    int num6 = reward+1;
    printf("Your lotto's number is %d\n",num6);
}

int main() {
   struct lotto Lotto;
srandom(time(NULL));
Lotto.first_reward=rand()%1000000;
   printf("Lotto\nFirst reward is %d\n",Lotto.first_reward);
   //call function printLotto
   printLotto(Lotto.first_reward);
   return 0;
}
