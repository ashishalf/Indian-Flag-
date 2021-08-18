#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
int main()
{
int gd=DETECT,gm,i,x,y;
float pi=3.14;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(RED);
rectangle(155,150,455,200);
setfillstyle(SOLID_FILL,RED);
floodfill(156,151,4);

setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
rectangle(155,200,455,250);
floodfill(156,201,WHITE);

setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
rectangle(155,250,455,300);
floodfill(156,251,GREEN);

setcolor(BLUE);
circle(305,225,25);
 setcolor(15);
 settextstyle(1,0,5);
 outtextxy(260,350,"INDIA");
for(i=0;i<360;i=i+10)
{
 x=25*cos(i*pi/180);
 y=25*sin(i*pi/180);
 setcolor(BLUE);
 line(305,225,305+x,225-y);
 delay(150);
 }
getch();
}