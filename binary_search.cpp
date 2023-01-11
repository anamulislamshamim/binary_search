#include<bits/stdc++.h>

using namespace std;


int main()
{
    vector<int>arr={5,1,3,2,4};
    // sort the arr:
    sort(arr.begin(), arr.end());
    // binary search
    int k=3;
    int l=0,r=arr.size();
    bool isExist=false;
    for(int i=0;i<arr.size();i++){
        int mid=arr.size() / 2;
        if(arr[mid]==k)
        {
            isExist=true;
            break;
        };
        if(arr[mid]<k)
            l=mid+1;
        else
            r=mid-1;
    };
    if(isExist)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
    return 0;
}
