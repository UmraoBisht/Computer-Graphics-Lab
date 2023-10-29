#include<conio.h>
#include<graphics.h>

int main()
{
    // Drawing Smiley Face
    int gDriver=DETECT,gMode;
    initgraph(&gDriver,&gMode,"C:\\TurboC3\\BGI");
    circle(300, 100, 40);
    fillellipse(310, 85, 2, 6);
    fillellipse(290, 85, 2, 6);

    ellipse(300, 100, 205, 335, 20, 9);
    ellipse(300, 100, 205, 335, 20, 10);
    ellipse(300, 100, 205, 335, 20, 11);
    getch();
    closegraph();
    return 0;
}
