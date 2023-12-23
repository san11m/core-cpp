#include <iostream>
using namespace std;
int Search(int arr[], int l, int r, int x)
{
    while (l <= r){
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main(){
    int arr[] = { 10,20,30,40,50,60,70,80 };
    int x;
    cout<<"Entr a number : ";
    cin>>x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = Search(arr, 0, n - 1, x);
    if(result == -1){
        cout << "Element is not present in array";
    }
    else{
        cout << "Element is present at index : " << result;
    }
    return 0;
}
