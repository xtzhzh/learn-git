#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //质数
    int prime[100];
    for(int i=2;i<100;i++) prime[i]=1;
    for(int i=2;i<100;i++)
        if(prime[i])
            for(int j=i*2;j<100;j+=i) prime[j]=0;
    
    char str[100];
    int a[26]={0};
    cin>>str;
    for(int i=0;i<strlen(str);i++) a[str[i]-'a']+=1;
    int maxn=0;
    int minn=100;
    for(int i=0;i<26;i++){
        if(a[i]>maxn) maxn=a[i];
        if(a[i]<minn) minn=a[i];
    }
    if(prime[maxn-minn]) cout<<"Lucky Word"<<endl<<maxn-minn;
    else cout<<"No Answer"<<endl<<0;
    return 0;

}