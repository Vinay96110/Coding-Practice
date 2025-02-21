#include <iostream>
using namespace std;

void Zero_One_Sort (int arr[], int size)
{
    int start = 0;
    int end = size -1;

    while(start < end)
    {
        if(arr[start] == 0)
        {
            start ++;
        }
        else if (arr[end] == 1)
        {
            end --;
        }
        else if ( arr[start] == 1 && arr[end] == 0)
        {
            swap(arr[start],arr[end]);
            start ++;
            end --;
        }
    }   

}

void Print_Array( int arr[], int size)
{
   for (int i=0; i<size; i++)
   {
    cout << arr[i]<< endl;
   }
   cout << endl;
}

int main ()
{
    
    int arr[11] = { 0,1,1,1,0,0,0,0,1,1,1};

    Zero_One_Sort(arr, 11);
    //cout << result << endl;


    cout <<"After sorting"<<endl;
    Print_Array( arr, 11);


}