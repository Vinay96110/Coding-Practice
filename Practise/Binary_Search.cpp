#include <iostream>
using namespace std;

int Binary_Search (int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;

    int mid = start + (end - start) /2;

    while (start <= end)
    {
    if (mid == key)
    {
        return mid;
    }

    else if ( mid < key)
    {
        start = mid + 1;
    }

    else //(mid > key)
    {
        end = mid -1;
    }
    mid = start + (end - start) /2;
    }
    
    return -1;

}

int main ()
{
    int arr[5] = { 1,2,3,4,5};
    int key = 5;

    int result = Binary_Search(arr, 5, 2);
    cout << result << endl;
}