#include <iostream>
#include "bit_array.h"
using namespace std;

int main()
{


    cout << "bit_array a: 0x00ff00ff" << endl;
    Bit_array a(0x00ff00ff);
    cout << a << endl;
//    for(auto i = 0; i < 32;++i)
//    {
         cout << a.get_bit(2) << endl;
//}

    a.set_length(60);

    cout << a.get_length() << endl;;
    cout << a << endl;


    cout << a.get_bit(23) << endl;


    return 0;
}
