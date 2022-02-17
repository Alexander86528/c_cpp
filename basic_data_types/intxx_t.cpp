#include <iostream>

int main()
{
    using namespace std;

    //int8_t - соответствует char, cout << выводит символ из табл. ASCII
    int8_t a;
    uint8_t b;

    cout << "int8_t = " << sizeof(int8_t) << " byte" << endl;
    cout << "uint8_t = " << sizeof(uint8_t) << " byte" << endl;
    cout << "int16_t = " << sizeof(int16_t) << " byte" << endl;
    cout << "uint16_t = " << sizeof(uint16_t) << " byte" << endl;
    cout << "int32_t = " << sizeof(int32_t) << " byte" << endl;
    cout << "uint32_t = " << sizeof(uint32_t) << " byte" << endl;
    cout << "int64_t = " << sizeof(int64_t) << " byte" << endl;
    cout << "uint64_t = " << sizeof(uint64_t) << " byte" << endl;
    cout << "\n";

    a = 65;
    cout << a << endl;
    a = 66;
    cout << a << endl;
    a = 67;
    cout << a << endl;
    
    
    return 0;
}
