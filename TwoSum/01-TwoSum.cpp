#include <bits/stdc++.h>
using namespace std;

vector<int> twoNumberSum(vector<int> a, int t) {
  int n=a.size();
	sort(a.begin(),a.end());
	int s=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{	s=a[i]+a[j];
      if(s>t)break;
		  else if(s==t) return {a[i],a[j]};
		}
	}
 return {};
}