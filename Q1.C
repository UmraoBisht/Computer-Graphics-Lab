#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{ 
    // Drawing Shapes
    int gDriver=DETECT,gMode;
    int left, top, right, bottom; 
    initgraph(&gDriver,&gMode,"C:\\TurboC3\\BGI");
    // Line
    // setcolor(BLUE);
    outtextxy(20,150,"Line");
    line(40,150,150,40);

    // ARC
    outtextxy(20,180,"ARC");
    arc(40,100, 180, 90,100);
    // BAR
    outtextxy(140,180,"BAR");
    bar(left = 150, top = 150,  
    right = 190, bottom = 350); 
  
    bar(left = 220, top = 250, 
    right = 260, bottom = 350); 
  
    bar(left = 290, top = 200, 
    right = 330, bottom = 350); 
  
    // y axis line 
    line(100, 50, 100, 350); 
  
    // x axis line 
    line(100, 350, 400, 350);

    getch();
    closegraph();
    return 0;
}
