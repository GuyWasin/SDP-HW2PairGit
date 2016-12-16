#include <stdio.h>
#include <math.h>
#include <stdlib.h>


struct lotto{
    int first_reward;
};

void printLotto(){
    //return random number 5 digits
}

int main() {
   struct lotto Lotto;
   srandom(time(NULL));
   Lotto.first_reward=rand()%1000000;
   printf("Lotto\nFirst reward is %d",Lotto.first_reward);
   //call function printLotto
   return 0;
}
