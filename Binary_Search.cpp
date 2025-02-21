#include <iostream>
using namespace std;

bool Binary_Search (int arr[], int size, int key)
{
    int start = 0;
    int end = size -1;

    int mid = (start + end) /2;

    while (size != 0)
    {
    if (mid == key)
    {
        return mid;
    }

    if ( mid < key)
    {
        start = mid + 1;
    }

    if (mid > key)
    {
        end = mid -1;
    }
     mid = start + end / 2;
    }
    return -1;

}

int main ()
{
    int arr[5] = { 1,2,3,4,5};
    int key = 5;

    int result = Binary_Search(arr, 5, 7);
    cout << result << endl;
}