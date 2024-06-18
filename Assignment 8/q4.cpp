#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void squaresort(vector<int> &arr1,vector<int> &arr2){

   int i=0,j=arr1.size()-1;
   while(i<=j){
    if(abs(arr1[i])>abs(arr1[j])){
        arr2.push_back(arr1[i]*arr1[i]);
        i++;
    }
    else {
         arr2.push_back(arr1[j]*arr1[j]);
        j--;
    }
   }

}

int main()
{
    int n;
    vector<int> arr1;
    vector<int> arr2;
    cin >> n;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr1.push_back(ele);
    }
    squaresort(arr1, arr2);    
    for (int ele : arr2)
    {
        cout << ele << "  ";
    }
    return 0;
}