#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=0,gm;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  circle(200,150,80);
  circle(170,130,17);
  circle(230,130,17);
  line(200,140,200,170);
  line(161,181,239,181);
  arc(200,175,190,350,40);
  getch();
  closegraph();
  }