#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");

    // draws bangla letter 'Ka'
    line(20, 50, 150, 50);
    line(100, 50, 100, 250);
    line(100, 50, 20, 150);
    line(20, 150, 100, 250);
    arc(100, 100, -20, 80, 50);

    //  draws bangla letter 'Kha'
    line(400, 50, 400, 250);
    line(400, 80, 430, 80);
    line(300, 200, 400, 250);
    line(300, 200, 330, 130);
    line(330, 130, 315, 114);
    arc(280, 100, 115, -25, 40);
    circle(270, 70, 10);

    getch();
    closegraph();
}

