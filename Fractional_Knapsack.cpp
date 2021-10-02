// FRACTIONAL KNAPSACK
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct item
{
    int id;
    double val;
    double weight;
};

// sorting the items in the decreasing order of their (val/weight) ratio
void sort(struct item a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            double x = a[j].val / a[j].weight;
            double y = a[j + 1].val / a[j + 1].weight;
            if (y > x)
            {
                int temp = a[j].id;
                a[j].id = a[j + 1].id;
                a[j + 1].id = temp;

                temp = a[j].val;
                a[j].val = a[j + 1].val;
                a[j + 1].val = temp;

                temp = a[j].weight;
                a[j].weight = a[j + 1].weight;
                a[j + 1].weight = temp;
            }
        }
    }
}

void maximise(struct item a[], int n, int w)
{
    sort(a, n);

    int u = w;
    double res = 0.0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i].weight <= u)
        {
            cout << a[i].id << " " << a[i].val << " " << a[i].weight << endl;
            u = u - a[i].weight;
            res += a[i].val;
        }
        else
            break;
    }
    if (i < n)
    {
        cout << a[i].id << " " << a[i].val << " " << a[i].weight;
        res += ((u / a[i].weight) * a[i].val);
    }
    cout << "\nMAXIMUM IS: " << res;
}

// driver function
int main()
{
    int n;
    cout << "ENTER NUMBER OF ITEMS: ";
    cin >> n;
    int capacity;
    item arr[n];
    cout << "Enter the item no., value and weight of the each item respectively"
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].id;
        cin >> arr[i].val;
        cin >> arr[i].weight;
    }
    cout << "Enter the capacity of the bag"
         << "\n";
    cin >> capacity;
    maximise(arr, n, capacity);
    return 0;
}
