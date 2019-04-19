
#include <iostream>

#include <algorithm>

#include <math.h>

using namespace std;

int main(){

	int n;

	cin>>n;

	int num[n];

	for(int i = 0;i<n;i++){

		cin>>num[i];

	}

	sort(num,num+n);

	double ans = num[0];

	for(int i = 0;i<n;i++){

		ans = (ans+num[i])/2;

	}

	cout<<floor(ans);

	return 0;

} 
