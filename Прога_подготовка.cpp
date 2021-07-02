
#include <iostream>
using namespace std;

/*
template <typename T1,typename T2>
T2 Sum(T1 a, T2 b) {
    cout a;
    cout b;
}
*/

template <typename T1, typename T2>
void Sum(T1 a, T2 b) {
    cout << a;
    cout << b;
}

template <typename T1, typename T2>
class MyClass {
private:
    T1 value;
    T2 value2;
public:
    MyClass(T1 value, T2 value2) {
        this->value = value;
    }
    void DataTypeSize() {
        cout << sizeof(value) << endl;
        cout << sizeof(value2) << endl;
    }
};





int main()
{
    setlocale(LC_ALL, "ru");
    //cout << Sum(4, 5) << endl;

    //cout << Sum(4.15, 1.1) << endl;

    //cout << Sum(4, 1.1) << endl;

    //Sum(4, "Параметр");

    int a = 5;
    char b[] = "sfdsgs";
    MyClass<int, bool> c(a, b);
    c.DataTypeSize();
 }
