#include <stdio.h>
#include <math.h>
#include <stdlib.h>


struct lotto{
    int first_reward;
    int _3digitReward[4];
    int _2digitReward;
};

void printLotto(int reward){
    //return random number 6 digits
    int num6;
    if(reward%100000%10000%10000%1000%100%10!=9)
        num6 = reward+1;
    else num6 = reward-1;
    printf("Your lotto's number is %d\n",num6);
}

void init(struct lotto *p){
    srandom(time(NULL));    
    p->first_reward=rand()%1000000;
    int i;
    for(i=0;i<4;i++){
        p->_3digitReward[i]=rand()%1000;
    }
    p->_2digitReward=rand()%100;
}

int main() {
   struct lotto Lotto;
   init(&Lotto);
   printf("Lotto\nFirst reward is %d\n",Lotto.first_reward);
   int i;
   printf("3 digits reward are ");
   for(i=0;i<4;i++){
       printf(" %d",Lotto._3digitReward[i]);
   }printf("\n2 digits reward is %d\n",Lotto._2digitReward);
   //call function printLotto
   printLotto(Lotto.first_reward);
   return 0;
}
