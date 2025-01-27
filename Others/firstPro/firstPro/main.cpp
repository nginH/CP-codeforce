#include <iostream>
#include <algorithm>
using namespace std;
#define inout freopen("/Users/harshanand/Desktop/input.txt","r",stdin);freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);
#define Inf 2147483647
#define Pi acos(-1.0)
#define ll long long
#define Rd(r) freopen(r, "r", stdin)
#define Wt(w) freopen(w, "w", stdout)
#define Fn(name,low,upper) for(int name=low; name<upper ; name++)
#define F(name,low,upper) for(int name=low; name<=upper ; name++)

void solve(int a){
	char arr[a];
	for (int i=0; i<a; i++){
		cin>>arr[i];
	}
	char arr2[a];
	int count=0;
	int ans=0;
     int  arr3[a];
	 Fn(i, 0,a){
		arr3[i]=arr[i]; // converting char arry to ascii int array
	}
	int out=arr3[1]- arr3[0];
	Fn(i, 0, a){
//checking arthmatic relation between character //


		if (out==arr3[i+1]-arr3[i]){
			count++;
		}
		else{
			count=1;
			out=arr3[i+1]- arr3[i];
		}
		ans=max(ans, count);  //malximum length of arthmatic relation of chracter




			// use in output if we find arthmatic relation
		if(arr3[i]%2!=0){
			arr2[i]='(';
		}
		else{
			arr2[i]=')';
		}


	}


	ans=ans+1;
	if(ans==a && (out==0|| out==1)){
		cout<<"YES\n";
		for(int i=0; i<a; i++){
			cout<<arr2[i];
		}
		cout<<"\n";
	}
	else
		cout<<"NO\n";

	

}
int main(){
#ifndef ONLINE_JUDGE
	inout;
#endif
	int t;
	cin>>t;
	while (t--) {
		int s;
		cin>>s;
		solve(s);
	}
	return 0;
}
