#include<iostream>
using namespace std;

//length为字符串数组的总容量
void replaceSpace(char *str,int length)
{
    if(str==NULL||length<=0) return;
    int p1,p2;
    int i = 0;
    int blank_space = 0;
    int original_length = 0;
    while(str[i]!='\0')
    {
        ++original_length;
        if(str[i]==' ')  blank_space++;
        i++;
    }
    int new_length = original_length + blank_space*2;
    if(new_length>length)  return;
    p1 = original_length-1;
    p2 = new_length-1;
    while(p1!=p2)
    {
        if(str[p1]!=' ')
        {
            str[p2] = str[p1];
            p2--,p1--;
        }
        else
        {
            str[p2--] = '0';
            str[p2--] = '2';
            str[p2--] = '%';
            p1--;
        }
    }
    str[new_length] = '\0';
}

int main()
{
    char str[] = " helloworld";
    replaceSpace(str,100);
    cout<<str<<endl;
    return 0;
}
