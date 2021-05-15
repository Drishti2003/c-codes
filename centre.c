#include<stdio.h>
//gotoxy function
void gotoxy(int x,int y)
{
printf("%c[%d;%df",0x1B,y,x);
}
int main ()
{
gotoxy(25,50); //reposition cursor
printf("hello world"); //display text
}
