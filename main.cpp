#include <iostream>
#include "def.h" 
using namespace std;  

int main(){
    int a,b,c;
    cout << "请输入a,b,c\n";
    cin >> a >> b >> c;
    cout << "abc的乘积为："<<func(a,b,c);
    return 0;
}