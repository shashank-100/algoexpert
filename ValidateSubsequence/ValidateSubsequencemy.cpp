using namespace std;

bool isValidSubsequence(vector<int> a, vector<int> s) {
	int i=0,j=0;
	while(i<s.size()){
		int t=s[i],x=0;
		for(;j<a.size();j++){
			if(t==a[j])
			{i++;
			 x=1;
			 a[j]=10000;
			 break;
			}
		}
		if(x==0)
		return false;
	}
  return true;
}
