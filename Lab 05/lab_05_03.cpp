#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi");
    int x[4],y[4];
    cout<<"Line 1: ";
    cin>>x[0]>>y[0]>>x[1]>>y[1];
    cout<<"Line 2: ";
    cin>>x[2]>>y[2]>>x[3]>>y[3];
    cout<<"Line 3: ";
    cin>>x[4]>>y[4]>>x[5]>>y[5];



    getch();
    closegraph();
	return 0;
}

