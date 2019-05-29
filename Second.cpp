#include <iostream>
#include "vector"


using namespace std;

int binary_search(vector<int> &data, int key);

int main()
{
    int h, c;
    cin >> h >> c;
    vector<int> data(h);
    vector<int> search(c);

    for (int i = 0; i < data.size(); i++)
    {
        cin >> data[i];
    }
    for (int j = 0; j < search.size(); j++)
    {
        cin >> search[j];
    }

    for (int i = 0; i < search.size(); i++)
    {
        if (binary_search(data, search[i]) != -3) 
		{
            cout << "YES" << endl;
        } else
        {
            cout << "NO" << endl;
        }
        
    }
    

    return 0;
}

int binary_search(vector<int> &information, int key)
{
    int left = 0;            
    int right = information.size() - 1;    
 
    while (left <= right) 
    {
 
        int middle = (left + right) / 2;
 
        if (information[middle] == key) 
        {
        	return middle;
		}
        if (information[middle] < key)
		{
			left = middle + 1;
		} 
        if (information[middle] > key)
        {
        	right = middle - 1;
		}
		
    }
 
  return -3;
}
