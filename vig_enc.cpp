//encryption caesar ciphar
#include<bits/stdc++.h>
using namespace std;
int main(){
string s,d;
int n,x;
cout<<"Enter text and key text\n";
getline(cin,s);
cin>>d;
n=s.length();
x=d.length();
char c[n],ch;

for(int i=0;i<n;++i){
c[i]=d[i%x];
}
cout<<c<<endl;

for(int i=0;i<n;++i){
if(isalpha(s[i])){
if((s[i]>='A' && s[i]<='Z') && (c[i]>='A' && c[i]<='Z'))
s[i]=(s[i]+c[i]-2*'A')%26+'A';
if((s[i]>='A' && s[i]<='Z') && (c[i]>='a' && c[i]<='z'))
s[i]=(s[i]+c[i]-'A'-'a')%26+'A';
if((s[i]>='a' && s[i]<='z') && (c[i]>='A' && c[i]<='Z'))
s[i]=(s[i]+c[i]-'A'-'a')%26+'a';
if((s[i]>='a' && s[i]<='z') && (c[i]>='a' && c[i]<='z'))
s[i]=(s[i]+c[i]-'a'-'a')%26+'a';
}
}
cout<<s<<endl;
	return 0;
}
