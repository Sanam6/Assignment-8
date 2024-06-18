#include <iostream>
#include <vector>
using namespace std;

void checkpair(const vector<int> &arr, int x)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= x)
        {
            break;
        }
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == x)
            {
                cout << "yes";
                return;
            }
        }
    }
    cout << "No";
}

int main()
{
    int n;
    vector<int> arr;
    cin >> n;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    int x;
    cout << "Enter x: ";
    cin >> x;
    checkpair(arr, x);

    return 0;
}