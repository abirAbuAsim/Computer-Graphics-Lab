/*`

    @author: Abir Bin Ayub Khan C131001
*/
#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main() {
    double radius, x, y, d, s = 100, t = 100;

    cout << "Enter radius: ";   cin >> radius;    cout<<endl;
    x = 0, y = radius, d = 3 - (2 * radius);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");

    while(x <= y){
        putpixel(x + s, y + t, WHITE);
        putpixel(x + s, -y + t, WHITE);
        putpixel(-x + s, y + t, WHITE);
        putpixel(-x + s, -y + t, WHITE);
        putpixel(y + s, -x + t, WHITE);
        putpixel(y + s, x + t, WHITE);
        putpixel(-y + s, x + t, WHITE);
        putpixel(-y + s, -x + t, WHITE);

        if (d < 0) {
            d = d + 4 * x + 6;
        } else {
            d = d + 4 * (x - y) + 10;
            y--;
        }
        x++;
    }

    getch();
    closegraph();
}
