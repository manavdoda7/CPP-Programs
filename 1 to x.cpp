#include<iostream>
using namespace std;

int min(int a, int b){
    if(a <= b && a != 0)
    return a;
    else if(b != 0)
    return b;
}

int value(int x, int* p){
    int s1 = 0, s2 = 0, s3 = 0, steps;
    if(x == 1){
        p[0] = x;
        return 0;
    }
    if(x%3 != 0){
        s1 = value(x-1,p+1);
        p[0] = x;
        s1++;
    }
    if(x%2 == 0){
        s2 = value(x/2,p+1);
        p[0] = x;
        s2++;
    }
    if(x%3 == 0){
        s3 = value(x/3,p+1);
        p[0] = x;
        s3++;
    }
    steps = min(min(s3,s2),s1);
    //for(int i = 0; i < steps; i++)
   // cout << p[i] << " ";
    return steps;
}

int main(){
    int x;
    cin >> x;
    int p[100];
    cout << value(x,p);
    return 0;
}
