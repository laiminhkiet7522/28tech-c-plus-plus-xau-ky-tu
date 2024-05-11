#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int demThuong=0, demHoa=0, demDB=0;
    char c[100];
    cout<<"Nhap chuoi: ";
    cin.getline(c,100);
    for(int i=0; i<strlen(c); i++)
    {
        if(c[i]>='a' && c[i]<='z')
        {
            demThuong++;
        }
        else if(c[i]>='A' && c[i]<='Z')
        {
            demHoa++;
        }
    }
    cout<<"So ky tu in thuong la: "<<demThuong<<endl;
    cout<<"So ky tu in hoa la: "<<demHoa<<endl;
    cout<<"So ky tu dac biet la: "<<strlen(c) - demHoa - demThuong<<endl;
    return 0;
}
