#include <bits/stdc++.h>
using namespace std;

void sortBySelect(int array[], int n);

int main()
{

   int size;
   cin >> size;

   int arr[size];

   for(int i = 0; i < size; i++)
   {
      cin >> arr[i];
   }

   sortBySelect(arr, size);

   for(int i = 0; i < size; i++)
   {
      cout << arr[i] << " ";
   }
}

void sortBySelect(int array[], int n)
{
   int i, j, max_index;

   for(i = n - 1; i >= 0; i--)
   {
      max_index = i; 

      for(j = i; j >= 0; j--) 
      {
         if(array[j] > array[max_index]) 
         {
            max_index = j; 
         }
      }
      swap(array[max_index], array[i]); 
   }
}
