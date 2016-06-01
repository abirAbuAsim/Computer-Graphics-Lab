#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;
int main(){
    int bitmapA[7][5] = {0, 0, 0, 0, 0,
                         0, 0, 1, 0, 0,
                         0, 1, 0, 1, 0,
                         0, 1, 0, 1, 0,
                         0, 1, 1, 1, 0,
                         0, 1, 0, 1, 0,
                         0, 1, 0, 1, 0};
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");

    for (int I = 0; I < 7; I++) {
        for (int J = 0; J < 5; J++) {
            //printf("%d ", bitmapA[I][J]);
            if (bitmapA[I][J] == 0) {
                continue;
            }
            putpixel(J, I, WHITE);
        }
        cout<<endl;
    }
    getch();
    closegraph();
	return 0;
}
