#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    p=2*dy-dx;
    while(x<x1)
    {
	if(p<0)
	{
	    putpixel(x,y,RED);
	    p=p+2*dy;
	}
	else
	{
		putpixel(x,y,RED);
	    y=y+1;
	    p=p+2*dy-2*dx;
	    }
	    x++;
	}
}
void main()
{
    int gd=DETECT, gm, error, x0, y0, x1, y1;
    initgraph(&gd, &gm, "c:\\TURBOC3\\BGI");
    printf("Enter first coordinates :");
    scanf("%d %d", &x0, &y0);
    printf("Enter second coordinates :");
    scanf("%d %d", &x1, &y1);
    drawline(x0, y0, x1, y1);
    getch();
    closegraph();
}
