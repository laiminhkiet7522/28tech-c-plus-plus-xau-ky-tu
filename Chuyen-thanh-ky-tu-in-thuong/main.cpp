#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char c[100];
    cout<<"Nhap chuoi: ";
    cin.getline(c,100);
    for(int i=0;i<strlen(c); i++)
    {
        c[i]=tolower(c[i]);
    }
    cout<<"Chuoi sau khi chuyen sang thuong la: "<<c<<endl;
    return 0;
}
