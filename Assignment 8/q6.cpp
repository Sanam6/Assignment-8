#include <iostream>
#include <vector>

using namespace std;
int uniquepair(vector<int> &arr, int x)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int value = x - arr[i];
        int j = i+1, k = arr.size() - 1, sum;
        while (j < k)
        {
            sum = arr[j] + arr[k];
            if (sum == value)
            {
                count++;
               vector<int> temp={arr[i],arr[j],arr[3]};
               while(j<k&&arr[j]==temp[1]){
                j++;
               }
               while(k>j&&arr[j]==temp[1]){
                k--;
               }
            }
            else if (sum > value)
            {
                k--;
            }
            else if (sum < value)
            {
                j++;
            }
        }
        while(i+1<arr.size()&&arr[i]==arr[i+1]){
            i++;
        }
    }

    return count;
}

int main()
{
    int n;
    vector<int> arr;
    cin >> n;
    cout << "Enter the elements: " << endl;
    for (int j = 0; j < n; j++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }

    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout <<"Triplets: "<<uniquepair(arr, x);

    return 0;
}