#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int>& start);
void mergeSort(vector<int>& left, vector<int>& right, vector<int>& res);

int main(){

	vector<int> numbers;
	
	int size, number;

	cin >> size;
	
	for(int i = 0; i<size; i++){
		cin >> number;
		numbers.push_back(number);
	}

	sort(numbers);
	
	for(int i = 0; i < numbers.size(); i++){
		
		cout << numbers[i] << " ";
	}
	
	return 0;
}

void sort(vector<int>& start) {
	
	if(start.size() <= 1) return;

	int middle = start.size() / 2;
	
	vector<int> left;
	vector<int> right;
	
	for(int j = 0; j < middle; j++){
		left.push_back(start[j]);
	}
	
	for(int j = 0; j < (start.size()) - middle; j++){
		
		right.push_back(start[middle + j]);
	}

	sort(left);
	sort(right);
	mergeSort(left, right, start);
}

void mergeSort(vector<int>& left, vector<int>& right, vector<int>& res){

	int sLeft = left.size();
	int sRight = right.size();
	
	int i = 0, j = 0, k = 0;
	
	while(i < sLeft && k < sRight){
		if(left[i] < right[k]){
			res[j] = left[i];
			i++;
		}
		else
		{
			res[j] = right[k];
			k++;
		}
		j++;
	}
	
	while(i < sLeft){
		res[j] = left[i];
		i++;
		j++;
	}

	while(k < sRight){
		res[j] = right[k];
		k++;
		j++;
	}
}

