#include <iostream>
#include "def.h" 
using namespace std;  

int main(){
    int a, b, c;
    cout << "请输入a,b,c\n";
    cin >> a >> b >> c;
<<<<<<< HEAD
    cout << "abc的乘积为："<<func(a,b,c);
=======
    cout << "abc的积为：" << func1(a, b, c);
>>>>>>> c25cdbd7999865b9972874226ee150ed8e69c2a5

    int d, e, f;
    cout << "请输入d,e,f\n";
    cin >> d >> e >> f;
    cout << "def的和为：" << func2(a, b, c);
    return 0;
}