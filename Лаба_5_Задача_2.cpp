#include<bits/stdc++.h>

using namespace std;

int sift_down(vector<int>&  mas,int father) {
	while (mas.size()>father*2) {
		int position=father*2;
		if(mas[father*2+1] > mas[father*2] && mas.size()>father*2 +1)position = father*2+1;
		if(mas[position] > mas[father]) {
			swap(mas[position],mas[father]);
			father=position;
		} else {
			break;
		}
	}
	return father;
}

int main() {
	int n;
	cin>>n;
	vector<int> mas(n+1);
	for(int i =1; i<n+1; i++)cin>>mas[i];
	int v;
	cin>>v;
	for(int i =0; i<v; i++) {
		int p,r;
		cin>>p>>r;
		mas[p]=mas[p]-r;
		cout<<sift_down(mas,p)<<endl;
	}
	for(int i=1; i<n+1; i++)cout<<mas[i]<<" ";
	cout << endl;
}
