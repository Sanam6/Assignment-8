#include <iostream>
#include <vector>
using namespace std;

void mergeandsort(vector<int> &arr1, vector<int> &arr2, vector<int> &arr)
{
    int i = 0, j = 0;
    while (i < arr1.size() || j < arr2.size()){
        if (i < arr1.size() && j < arr2.size()){
            if (arr1[i] < arr2[j]){
                arr.push_back(arr1[i]);
                i++;
            }
            else{
                arr.push_back(arr2[j]);
                j++;
            }
        }
        else if (i >= arr1.size())
        {
            arr.push_back(arr2[j]);
            j++;
        }
        else if (j >= arr2.size())
        {
            arr.push_back(arr1[i]);
            i++;
        }
    }
}

int main()
{
    int m, n;
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr;
    cout << "Enter the Number of elements in array1 & array2: " << endl;
    cin >> m >> n;

    cout << "Enter the Array 1 elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        int ele;

        cin >> ele;
        arr1.push_back(ele);
    }

    cout << "Enter the Array 2 elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr2.push_back(ele);
    }

    mergeandsort(arr1, arr2, arr);

    for (int ele : arr)
    {
        cout << ele << "  ";
    }
    return 0;
}