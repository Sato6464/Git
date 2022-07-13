#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int i;
int coin;
int Hcount =0, Tcount =0;

srand((unsigned int)time(NULL));

printf("Tossing a coin...\n");

for( i=0 ; i<3 ; i++ ){

    coin = rand() % 2;

    if( coin == 0 ){
        printf("Round %d: Tails\n",i+1);
        Tcount++;
    }

    else{
        printf("Round %d: Heads\n", i+1);
        Hcount++;
    }
}

printf("Heads: %d, Tails: %d\n", Hcount, Tcount);

if(Hcount >= Tcount)
printf("You won!\n");

else
printf("You lost\n");

return 0;

}