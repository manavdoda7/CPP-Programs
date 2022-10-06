#include<bits/stdc++.h>
using namespace std;

int round_(double a) {
    int x = a;
    if(a-(double)x<0.5) return x;
    return x+1;
}

void DDA(int xs, int ys, int xe, int ye) {
    int dx=xe-xs;
    int dy=ye-ys;
    double steps= abs(dx)>abs(dy)?abs(dx):abs(dy);
    double xinc=dx/steps;
    double yinc=dy/steps;
    int ly=max(ye, ys)+3;
    int lx=max(xe, xs)+3;
    char grid[ly][lx];
    for(int i=0;i<ly;i++) for(int j=0;j<lx;j++) grid[i][j]='.';
    double x=xs, y=ys;
    grid[round_(y)][round_(x)]='*';
    for(int i=0;i<steps;i++) {
        x=x+xinc;
        y=y+yinc;
        grid[round_(y)][round_(x)]='*';
    } 
    for(int i=ly-1;i>=0;i--) {
        for(int j=0;j<lx;j++) cout<<grid[i][j];
        cout<<endl;
    }
}

int main() {
    DDA(0, 25, 20, 0);
}