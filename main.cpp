#include <iostream>
#include "def.h" 
using namespace std;  

int main(){
    int a, b, c;
    cout << "请输入a,b,c\n";
    cin >> a >> b >> c;
    cout << "abc的积为：" << mul(a, b, c);

    int d, e, f;
    cout << "请输入d,e,f\n";
    cin >> d >> e >> f;
    cout << "def的和为：" << add(a, b, c);
    return 0;
}