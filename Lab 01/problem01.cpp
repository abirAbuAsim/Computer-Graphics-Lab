#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");

    //  draws a line
    line(10, 10, 50, 50);

    //  draws a circle
    circle(80, 100, 50);

    //  draws a rectangle
    int width = 300;
    int height = 100;

    int topLeftX = 200, topLeftY = 50;
    int topRightX = topLeftX + width, topRightY = topLeftY;
    int bottomLeftX = topLeftX, bottomLeftY = topLeftY + height;
    int bottomRightX = topRightX, bottomRightY = bottomLeftY;
    line(topLeftX, topLeftY, topRightX, topRightY);
    line(topLeftX, topLeftY, bottomLeftX, bottomLeftY);
    line(topRightX, topRightY, bottomRightX, bottomRightY);
    line(bottomLeftX, bottomLeftY, bottomRightX, bottomRightY);

    getch();
    closegraph();
}

