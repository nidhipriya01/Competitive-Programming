#include <iostream>
#include <set>
using namespace std;

bool checkpairsum(int arr[], int n, int sum)
{
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        if (s.find(sum - arr[i]) != s.end())
        {
            return true;
        }

        s.insert(arr[i]);
    }

    return false;
}

int main()
{
    int n, x;
    cin >> n >> x;

    int arr[100000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (checkpairsum(arr, n, x))
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}