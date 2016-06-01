/*
    This program implements Polynomial line algorithm using graphics.h library.
    four points are taken as input and then the line is drawn.

    @author: Abir Bin Ayub Khan C131001
*/
#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;

    cout << "Enter x1: ";   cin >> x1;    cout<<endl;
    cout << "Enter y1: ";   cin >> y1;    cout<<endl;
    cout << "Enter x2: ";   cin >> x2;    cout<<endl;
    cout << "Enter y2: ";   cin >> y2;    cout<<endl;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");

    double x = x1, y = y1;
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dT = 2 * (dy - dx);
    double dS = 2 * dy;
    double d = dS - dx;

    putpixel(x, y, WHITE);
    while (x < x2) {
        x++;
        if (d < 0) {
            d = d + dS;
        } else {
            y++;
            d = d + dT;
        }
        putpixel(x, y, WHITE);
    }
    getch();
    closegraph();
}
