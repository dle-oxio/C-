#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

int high,width;
int ball_x,ball_y;
int ball_vx,ball_vy;

void gotoxy(int x,int y)
{
    HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X=x;
    pos.Y=y;
    SetConsoleCursorPosition(handle,pos);
}

void startup()
{
    high=15;
    width=20;
    ball_x=0;
    ball_y=width/2;
    ball_vx=1;
    ball_vy=1;
}

void show()
{
    gotoxy(0,0);
    int i,j;
    for(i=0;i<high;i++)
    {
        for(j=0;j<width;j++)
        {
            if((i == ball_x) && (j == ball_y))
                printf("O");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void updateWithoutInput()
{
    ball_x=ball_x+ball_vx;
    ball_y=ball_y+ball_vy;

    if((ball_x == 0) || (ball_x == high-1))
        ball_vx = -ball_vx;
    if((ball_y == 0) || (ball_y == width-1))
        ball_vy = -ball_vy;

    Sleep(50);
}

void updateWithInput()
{

}

int main()
{
    startup();
    while(1)
    {
        show();
        updateWithInput();
        updateWithoutInput();
    }
    return 0;
}
