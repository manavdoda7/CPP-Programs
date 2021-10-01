
#include<iostream>

using namespace std;
int sum(int input[], int n);

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}


int sum(int input[], int n) {
  int s=0;
    if(n==0)
    {
       return 0;
    }
   s = input[0] +  sum(input+1,n-1); 
    return s;

}
