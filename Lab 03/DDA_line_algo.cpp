/*
    This program implements DDA line algorithm using graphics.h library.
    four points are taken as input and then the line is drawn.

    @author: Abir Bin Ayub Khan C131001
*/
#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main() {


    int x1, y1, x2, y2;
    double m, c, y;

    cout << "Enter x1: ";   cin >> x1;    cout<<endl;
    cout << "Enter y1: ";   cin >> y1;    cout<<endl;
    cout << "Enter x2: ";   cin >> x2;    cout<<endl;
    cout << "Enter y2: ";   cin >> y2;    cout<<endl;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");

    m = (y2 - y1) / (x2 - x1);
    c = y1 - (m * x1);

    for (int x = x1; x <= x2; x++) {
        y = y + m;
        putpixel(x, y, WHITE);
    }

    getch();
    closegraph();

}

