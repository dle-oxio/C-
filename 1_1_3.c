#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int x=5;
    int y=10;
    int heig=20;
    int v=1;
    while(1)
    {
        x=x+v;
        system("cls");
        for(i=0;i<x;i++)
            printf("\n");
        for(j=0;j<y;j++)
            printf(" ");
        printf("O");
        printf("\n");

        if(x == heig)
            v=-v;
        if(x == 0)
            v=-v;
    }
    return 0;
}
