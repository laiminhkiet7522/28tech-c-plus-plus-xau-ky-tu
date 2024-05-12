#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s1[100];
    char s2[100];
    int dem[256]= {0};
    cout<<"Nhap chuoi s1: ";
    cin.getline(s1,100);
    cout<<"Nhap chuoi s2: ";
    cin.getline(s2,100);
    for(int i=0; i<strlen(s1); i++)
    {
        dem[s1[i]]=1;
    }
    for(int i=0; i<strlen(s2); i++)
    {
        if(dem[s2[i]])
        {
            dem[s2[i]]=2;
        }
    }
    cout<<"Ky tu xuat hien o ca chuoi s1 va s2 la: ";
    for(int i=0; i<256; i++)
    {
        if(dem[i]==2)
        {
            cout<<char(i);
        }
    }
    return 0;
}
