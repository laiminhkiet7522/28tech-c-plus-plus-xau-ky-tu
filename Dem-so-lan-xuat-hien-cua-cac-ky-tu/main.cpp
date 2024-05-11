#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char c[100];
    int dem[26]={0};
    cout<<"Nhap chuoi: ";
    cin.getline(c,100);
    for(int i=0; i<strlen(c); i++)
    {
        dem[c[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(dem[i]!=0)
        {
            cout<<(char)(i+'a')<<": xuat hien "<<dem[i]<<" lan"<<endl;
        }
    }
    return 0;
}
