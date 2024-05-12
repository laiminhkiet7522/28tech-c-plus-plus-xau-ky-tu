#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char c[100];
    int dem[26]= {0};
    cout<<"Nhap chuoi: ";
    cin.getline(c,100);
    for(int i=0; i<strlen(c); i++)
    {
        dem[c[i]-'a']++;
    }
    for(int i=0; i<strlen(c); i++)
    {
        if(dem[c[i]-'a'])
        {
            cout<<c[i]<<": xuat hien "<<dem[c[i]-'a']<<" lan"<<endl;
            dem[c[i]-'a']=0;
        }
    }
    return 0;
}
