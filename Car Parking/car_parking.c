#include<stdio.h>

int main()
{
    int inp;
    int amount=0, numVeh=0;
    int ric,car,bus;
    while(1){
    printf("\nenter 1 for rickshaw\n");
    printf("enter 2 for car\n");
    printf("enter 3 for tralla\n");
    printf("enter 4 for parking data\n");
    scanf("%d", &inp);
    if(inp==1)
    {
        amount+=100;
        numVeh+=1;

    }
    else if(inp==2)
    {
        amount+=300;
        numVeh+=1;

    }
    else if(inp==3)
    {
        amount+=600;
        numVeh+=1;

    }
    else if(inp==4)
    {
        printf("total amount: %d \n", amount);
        printf("total vehicles: %d", numVeh);

    }
    else
    {
        printf("INvalid Number");
    }

    }

    return 0;
}
