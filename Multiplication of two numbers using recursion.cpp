#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n) 
{
    if(n==0)
    {
        return 0;
    }
    int ans = multiplyNumbers(m, n-1);
        return ans + m;
    
    

}


int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
