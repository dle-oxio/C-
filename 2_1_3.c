#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int position_x,position_y;
int bullet_x,bullet_y;
int high,width;
int enemy_x,enemy_y;

void startup()
{
    high=20;
    width=30;
    position_x=high/2;
    position_y=width/2;
    bullet_x=0;
    bullet_y=position_y;
    enemy_x=0;
    enemy_y=position_y;
}

void show()
{
    system("cls");
    int i,j;
    for(i=0;i<high;i++)
    {
        for(j=0;j<width;j++)
        {
            if((i==position_x) && (j==position_y))
                printf("*");
            else if((i==enemy_x) && (j==enemy_y))
                printf("@");
            else if((i==bullet_x) && (j==bullet_y))
                printf("|");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void updateWithoutInput()
{
    if(bullet_x>-1)
        bullet_x--;
}

void updateWithInput()
{
    char input;
    if(kbhit())
    {
        input=getch();
        if(input == 'a')
            position_y--;
        if(input == 'd')
            position_y++;
        if(input == 'w')
            position_x--;
        if(input == 's')
            position_x++;
        if(input == ' ')
        {
            bullet_x=position_x-1;
            bullet_y=position_y;
        }
    }
}

int main()
{
    startup();
    while(1)
    {
        show();
        updateWithoutInput();
        updateWithInput();
    }
    return 0;
}
