#include<iostream>
#include<vector>

using namespace std;
int uniquepair(vector<int> & arr,int x){
int count=0;
int i=0,j=arr.size()-1,sum;
while (i<j)
{
    sum=arr[i]+arr[j];
    if(sum==x){
        count++;
        i++;
        j--;
    }
    else if(sum>x){
        j--;
    }
    else if(sum<x){
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
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }

    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
cout<<uniquepair(arr,x);

return 0;
}