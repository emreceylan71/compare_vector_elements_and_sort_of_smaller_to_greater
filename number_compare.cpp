// number_compare.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
#include<vector>
int main()
{
	int a = 5;
	int b = 4;
	int c = 3;
	int d = 2;
	int e = 8;
	int f = 6;
	vector<int> k = { a, b, c, d, e, f };
	for(int p=0;p<k.size();p++) {

	 for (int i = 0; i < 5; i++) {
		int m, n;
		m = k[i];
		n = k[i + 1];
		if (n > m) {
			k[i] = m;
			k[i+1] = n;

		}
		else {
			k[i] = n;
			k[i+1] = m;
		}
	 }

	}
	for (int l = 0; l < k.size(); l++) {

	cout << k[l] << endl;
     }
}
