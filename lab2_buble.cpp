#include <bits/stdc++.h>

using namespace std;

void BubleSort(int arr[], int size);

int main(){

int arr_size;

cin >> arr_size;

int array[arr_size];

for(int i = 0; i < arr_size; i++)
{
   cin >> array[i];
}

BubleSort(array, arr_size);

for(int i = 0; i < arr_size; i++)
{
   cout << array[i] << " ";
}

}

void BubleSort(int arr[], int size)
{
   int i, j;
   for(i = 0; i < size; i++)
   {
      for(j = i; j < size; j++)
      {
         if(arr[i] > arr[j])
         {
            swap(arr[i], arr[j]);
         }
      }
   }
}
