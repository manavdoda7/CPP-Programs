#include<iostream>
#include<cstring>
#define size 10
#define SieveSize 51

using namespace std;

bool prime[SieveSize];

int hashfn(int val)
{
    return val%size;
}

void sieve()
{
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(int i=2;i*i<SieveSize;i++)
    {
        if(prime[i])
            for(int j=i*i;j<SieveSize;j+=i)
                prime[j]=false;
    }
}

int NearestPrime(int hashsize)
{
    if(prime[hashsize])
        return hashsize;
    else
    {
        while(prime[hashsize]!=true)
            hashsize--;
        return hashsize;
    }
}

void Insert(int hash[],int key)
{
    int R = NearestPrime(size);
    int index=hashfn(key);
    int i=0;
    while (hash[(index + (i * (R - (key % R))))%size] != 0)
        i++;
    hash[(index + (i * (R - (key % R))))%size] = key;
}

int Search(int hash[],int key)
{
    int R = NearestPrime(size);
    int index = hashfn(key);
    int i = 0;
    while (hash[(index + (i * (R - (key % R)))) % size] != key && hash[(index + (i * (R - (key % R)))) % size] !=0)
        i++;
    if (hash[(index + (i * (R - (key % R)))) % size]==0)
        return -1;
    return (index + (i * (R - (key % R)))) % size;
}

int main()
{
    sieve();
    int hash[size]={0};
    
    Insert(hash, 5);
    Insert(hash, 25);
    Insert(hash, 15);
    Insert(hash, 35);
    Insert(hash, 95);

    for(int i=0;i<size;i++)
        cout<<hash[i]<<" ";
    cout<<endl;
    cout << Search(hash, 5) << " ";
    cout << Search(hash, 25) << " ";
    cout << Search(hash, 15) << " ";
    cout << Search(hash, 35) << " ";
    cout << Search(hash, 95) << " ";
    cout<<endl;

    return 0;
}
