#include <iostream>
using namespace std;

void Reverese_Array( int arr[], int size)
{
    int start = 0;
    int end = size-1;

    for (int i=0; i<size; i++)
    {
        if(  start >end)
        break;

        swap (arr[start], arr[end]);
        start ++;
        end --;
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


int main()
{
    int arr[6]= {1,2,3,4,5,6};
    int arr_1[5] ={ 10, 12, 13, 5, 7};

    cout << "Even size array \n";
    Reverese_Array(arr, 6);
    Print_Array(arr, 6);

    cout << "Odd size array \n";
    Reverese_Array(arr_1, 5);
    Print_Array(arr_1, 5);


}