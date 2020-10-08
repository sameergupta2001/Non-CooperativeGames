#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
printf("                        Welcome to the Prisoner's dilemma program");
printf("\n                      *****************************************\n");
printf("The rules are explained as follows :");
printf("\n");
printf("1.If both the prisoners cooperate the each of the prisoner recieves 3 points");
printf("\n");
printf("2.If prisoner A cooperates and the prisoner B defects then prisoner A recieves 0 points while prisoner B recieves 5 points");
printf("\n");
printf("3.If prisoner B cooperates and the prisoner A defects then prisoner B recieves 0 points while prisoner A recieves 5 points");
printf("\n");
printf("4.If both the prisoners defect then they recieve 1 points each");
printf("\n");
printf("\n");
}

int input()
{
int choice;
printf("===================\n");
printf("Please enter : ");
printf("\n");
printf("1 to cooperate");
printf("\n");
printf("2 to defect");
printf("\n");
scanf("%d", &choice);
printf("\n==================\n");
return choice;
}

int Random(int lower, int upper,   int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        int computer = (rand() %
           (upper - lower + 1)) + lower;
        return computer;
    }
}

int calculateuser(int a,int b)
{
    int ascore=0;
    if(a==1&&b==1)
    {
        ascore=3;
    }
    if(a==1&&b==2)
    {
        ascore=0;

    }
    if(a==2&&b==1)
    {
        ascore=5;

    }
    if(a==2&&b==2)
    {
        ascore=1;

    }
    return ascore;
}

int calculatecomputer(int a,int b)
{
    int bscore=0;
    if(a==1&&b==1)
    {
        bscore=3;
    }
    if(a==1&&b==2)
    {
        bscore=5;
    }
    if(a==2&&b==1)
    {
        bscore=0;
    }
    if(a==2&&b==2)
    {
        bscore=1;
    }
    return bscore;


}

int main()
{
    menu();

    int counter=9999;
    int userscore=0;
    int computerscore=0;
    int fuser=0;
    int fcomputer=0;
    void mainn()
    {
    while(counter>0)
    {
        int user=input();
        int computer=Random(1,2,1);
        int userscore=calculateuser(user,computer);
        int computerscore=calculatecomputer(user,computer);
        fuser=fuser+userscore;
        fcomputer=fcomputer+computerscore;
        if(user==1)
        {
        printf("User cooperates<--->");
        }
        if(user==2)
        {
        printf("User defects<--->");
        }
        if(computer==1)
        {
        printf("Computer cooperates\n");
        }
        if(computer==2)
        {
        printf("Computer defects\n");
        }

        printf("your score = %d  ",fuser);
        printf("computer's score = %d \n \n",fcomputer);
        printf("Enter 1 to continue \n");
        printf("Enter 2 to exit \n");
        int cont;
        scanf("%d",&cont);
        if(cont==1)
        {
            counter--;
            mainn() ;
        }
        else if(cont ==2)
        {
            counter=0;
            exit(0) ;
        }

    }}
    mainn();

    return 0;
}
