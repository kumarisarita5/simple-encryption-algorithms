//encryption caesar ciphar
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int t,n;
cout<<"Enter text and key\n";
getline(cin,s);
cin>>t;
n=s.length();
for(int i=0;i<n;++i){
if(isalpha(s[i])){
if(s[i]>='A' && s[i]<='Z')
s[i]=(s[i]-'A'+t)%26+'A';

if(s[i]>='a' && s[i]<='z')
s[i]=(s[i]-'a'+t)%26+'a';
}
}
cout<<s;
	return 0;
}
