#include <iostream>
using namespace std;
 
// Function for Ternary Search
int ternarySearch(int l, int r, int key, int ar[])
 
{
    while (r >= l) 
    {
        int mid1 = l + (r - l) / 3; //finding mid
        int mid2 = r - (r - l) / 3;
 
        // Check if key is present at any mid
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }

 
        if (key < ar[mid1]) {
 
            // The key lies in between l and mid1
            r = mid1 - 1;
        }
        else if (key > ar[mid2]) {
 
            // The key is in between mid2 and r
            l = mid2 + 1;
        }
        else {
 
            // The key is in between mid1 and mid2
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}
 
// Driver code
int main()
{
    int l, r, ans ,key,n;
    cin>>n>>key;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
 
    // Starting index
    l = 0;
 
    // length of array
    r = n-1;
 
    // Search the key using ternarySearch
    ans = ternarySearch(l, r, key, ar);
 
    // Print the result
    cout << ans<< endl;
 

}
