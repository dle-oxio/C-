#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    int x=0;
    int y=0;

    int v_x=1;
    int v_y=1;
    int left=0;
    int right=20;
    int top=0;
    int bottom=20;

    while(1)
    {
        x=x+v_x;
        y=y+v_y;
        system("cls");
        for(i=0;i<x;i++)
            printf("\n");
        for(j=0;j<y;j++)
            printf(" ");
        printf("O");
        printf("\n");

        if((x == top) || (x == bottom))
            v_x=-v_x;
        if((y == left) || (y == right))
            v_y=-v_y;
    }
    return 0;
}
