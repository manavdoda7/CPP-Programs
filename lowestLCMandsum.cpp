/ C++ program for the above approach 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to check if number is 
// prime or not 
bool prime(int n) 
{ 
    // As 1 is neither prime 
    // nor composite return false 
    if (n == 1) 
        return false; 
  
    // Check if it is divided by any 
    // number then it is not prime, 
    // return false 
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) 
            return false; 
    } 
  
    // Check if n is not divided 
    // by any number then it is 
    // prime and hence return true 
    return true; 
} 
  
// Function to find the pair (a, b) 
// such that sum is N & LCM is minimum 
void minDivisior(int n) 
{ 
  
    // Check if the number is prime 
    if (prime(n)) { 
        cout << 1 << " " << n - 1; 
    } 
  
    // Now, if it is not prime then 
    // find the least divisior 
    else { 
        for (int i = 2; i * i <= n; i++) { 
  
            // Check if divides n then 
            // it is a factor 
            if (n % i == 0) { 
  
                // Required output is 
                // a = n/i & b = n/i*(n-1) 
                cout << n / i << " "
                     << n / i * (i - 1); 
                break; 
            } 
        } 
    } 
} 
  
// Driver Code 
int main() 
{ 
    int N = 4; 
  
    // Function call 
    minDivisior(N); 
    return 0; 
}
