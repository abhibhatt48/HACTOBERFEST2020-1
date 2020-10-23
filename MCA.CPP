#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{	clrscr();
	int gd=0,gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	float x,y,r,p0,x1,y1;
	cout<<"\nPROGRAM FOR MAKING CIRCLE USING MID POINT ALGORITHIM\n";
	cout<<"ABHINAV [49-IT-19]\n\n";
	cout<<"x = ";
	cin>>x;
	cout<<"y = ";
	cin>>y;
	cout<<"r = ";
	cin>>r;
	x1=0;
	y1=r;
	p0=
	1-r;
	while(x1<=y1)
	{	putpixel(x1+x,y1+y,3);
		putpixel(x1+x,-y1+y,3);
		putpixel(y1+x,x1+y,3);
		putpixel(y1+x,-x1+y,3);
		putpixel(-x1+x,y1+y,3);
		putpixel(-x1+x,-y1+y,3);
		putpixel(-y1+x,x1+y,3);
		putpixel(-y1+x,-x1+y,3);
		if(p0<0)
		{	p0=p0+2*x1+1;
			x1++;
		}
		else
		{	p0=p0+2*x1-2*y1-1;
			x1++;
			y1--;
		}
	}
	getch();
	closegraph();
}