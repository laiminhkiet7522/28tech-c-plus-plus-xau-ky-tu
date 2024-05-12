#include <iostream>
#include <string.h>
using namespace std;

//Xau pangram la xau co day du ky tu tu a->z
int pangram(char c[])
{
    int cnt[26]= {0};
    for(int i=0; i<strlen(c); i++)
    {
        c[i]=tolower(c[i]);
    }
    for(int i=0; i<strlen(c); i++)
    {
        cnt[c[i]-'a']=1;
    }
    for(int i=0; i<26; i++)
    {
        if(cnt[i]==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char c[100];
    cout<<"Nhap chuoi: ";
    cin.getline(c,100);
    if(pangram(c))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
