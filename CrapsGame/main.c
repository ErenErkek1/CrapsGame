#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game();

int main( )
{
    int answer, junk;
    do{
    printf("\n"
           "\n"
           "  /$$$$$$                                                /$$$$$$                                   \n"
           " /$$__  $$                                              /$$__  $$                                  \n"
           "| $$  \\__/  /$$$$$$  /$$$$$$   /$$$$$$   /$$$$$$$      | $$  \\__/  /$$$$$$  /$$$$$$/$$$$   /$$$$$$ \n"
           "| $$       /$$__  $$|____  $$ /$$__  $$ /$$_____/      | $$ /$$$$ |____  $$| $$_  $$_  $$ /$$__  $$\n"
           "| $$      | $$  \\__/ /$$$$$$$| $$  \\ $$|  $$$$$$       | $$|_  $$  /$$$$$$$| $$ \\ $$ \\ $$| $$$$$$$$\n"
           "| $$    $$| $$      /$$__  $$| $$  | $$ \\____  $$      | $$  \\ $$ /$$__  $$| $$ | $$ | $$| $$_____/\n"
           "|  $$$$$$/| $$     |  $$$$$$$| $$$$$$$/ /$$$$$$$/      |  $$$$$$/|  $$$$$$$| $$ | $$ | $$|  $$$$$$$\n"
           " \\______/ |__/      \\_______/| $$____/ |_______/        \\______/  \\_______/|__/ |__/ |__/ \\_______/\n"
           "                             | $$                                                                  \n"
           "                             | $$                                                                  \n"
           "                             |__/                                                                  \n"
           "\n\n\n");
    printf("Welcome to the Vegaaas!!! Don't forget, house always wins!!\n Would you like play a game? Type y for yes type n for no:  ");
    answer=getchar();
    junk=getchar();
    if(answer=='y')
        game();
}while(answer=='y');

system("pause");
    return 0;
}

void game()
{
    int rand_sayi(int a, int b);
    srand(time(NULL));
    int zar1, zar2, zar3,zar4 , sum1,sum2;
    zar1=rand_sayi(1,6);
    zar2=rand_sayi(1,6);
    sum1=zar1+zar2;
    printf("You rolled a %i\n",sum1);
    if(sum1==7 || sum1==11)
    {
        printf("$$$ You Win $$$\n");
        return;
    }
    else if(sum1==2|| sum1==3|| sum1==12)
    {
        printf("You Lose!!!\n");
    }
    else
    {
        do
        {
            zar3=rand_sayi(1,6);
            zar4= rand_sayi(1,6);
            sum2=zar3+zar4;
            printf("you rolled a %i\n",sum2);
            if(sum2== sum1)
            {
                printf("$$$ You Win $$$\n");
                return;
            }
        }while(sum2 !=7);
        printf("You Lose!!!\n");
    }

}

int rand_sayi(int a, int b)
{
    return rand()%(b-a+1)+a;
}