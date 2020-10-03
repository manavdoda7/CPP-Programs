#include<bits/stdc++.h>
using namespace std;


/*  First insert num into ones then ones if again same number appear then make one zero and make two as that num if again that num appear make third as that numb and 
two and one as zero then repeat the same process again and again and finally return one which has only single number */


int single_number(vector<int>& nums){

int ones=0,two=0,third=0;

for(int n: nums){
two |= ones&n;
ones^=n;
third= ~(ones &two);

ones&=third;
two&= third;

}
return ones;




}



int main(){
int n;
cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }

    cout<<single_number(arr);
}