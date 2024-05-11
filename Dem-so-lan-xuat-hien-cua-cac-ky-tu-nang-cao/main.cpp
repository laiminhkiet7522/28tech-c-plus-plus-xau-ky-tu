#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int dem[256]={0};
    char c[100];
    cout<<"Nhap chuoi: ";
    cin.getline(c,100);
    for(int i=0; i<strlen(c);i++)
    {
        dem[(int)c[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(dem[i]!=0)
        {
            cout<<char(i)<<": xuat hien "<<dem[i]<<" lan"<<endl;
        }
    }
    return 0;
}
