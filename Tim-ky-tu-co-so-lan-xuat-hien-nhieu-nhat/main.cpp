#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char c[100];
    int dem[256]={0};
    cout<<"Nhap chuoi: ";
    cin.getline(c,100);
    for(int i=0;i<strlen(c);i++)
    {
        dem[c[i]]++;
    }
    int res=0;
    char kyTu;
    for(int i=0; i<256; i++)
    {
        if(dem[i]!=0)
        {
            if(dem[i]>=res)
            {
                res=dem[i];
                kyTu=(char)(i);
            }
        }
    }
    cout<<"Ky tu xuat hien nhieu nhat la: "<<kyTu<<endl;
    return 0;
}
