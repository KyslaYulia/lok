#include<bits/stdc++.h>

using namespace std;

int sift_up(vector<int>&  mas,int child) {
	while ((child > 1) && (mas[child/2] < mas[child])) {
		swap(mas[child],mas[child/2]);
		child = child/2;
	}
	return child;
}

int main() {
	int n;
	cin>>n;
	vector<int> mas(n+1);
	for(int i =1; i<n+1; i++)cin>>mas[i];
	int f;
	cin>>f;
	for(int i =0; i<f; i++) {
		int p,r;
		cin>>p>>r;
		mas[p]=r+mas[p];
		cout<<sift_up(mas,p)<<endl;
	}
	for(int i=1; i<n+1; i++)cout<<mas[i]<<" ";
	cout << endl;
}

