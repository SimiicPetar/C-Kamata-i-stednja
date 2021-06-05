#include <iostream>

using namespace std;

int main()
{
	int n=0;
	cin>>n;
	int t[n];
	t[n]={0};
	int s[n];
	s[n]={0};
	for(int i = 0;i<n;i++){
		cin>>t[i];
	}
	for(int i = 0;i<n;i++){
		cin>>s[i];
	}
	for(int i = 0;i<n;i++){
		int t1=0;
		t1=t[i];
		t1=t1*0.01;
		t[i]=t[i]+t1;
	}
	for(int i = 0;i<n;i++){
		int s1=0;
		s1=s[i];
		s1=s1*0.04;
		s[i]=s[i]+s1;
	}
	for(int i = 0;i<n;i++){
		int a=0;
		a=t[i]/10;
		t[i]=t[i]-a;
		s[i]=s[i]+a;
	}
	
	
	for(int i = 0;i<n;i++){
		int t1=0;
		t1=t[i];
		t1=t1*0.01;
		t[i]=t[i]+t1;
	}
	for(int i = 0;i<n;i++){
		int s1=0;
		s1=s[i];
		s1=s1*0.04;
		s[i]=s[i]+s1;
	}
	for(int i = 0;i<n;i++){
		int a=0;
		a=t[i]/10;
		t[i]=t[i]-a;
		s[i]=s[i]+a;
	}
	
	for(int i = 0;i<n;i++){
		cout<<t[i]<<endl;
	}
	for(int i = 0;i<n;i++){
		cout<<s[i]<<endl;
	}
	
	
}

