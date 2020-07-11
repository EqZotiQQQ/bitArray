#include "bit_array.h"
using namespace std;


Bit_array::Bit_array(const unsigned int value):length(32),pos(0)
{
    bit_arr.push_back(value);
}


Bit_array::Bit_array(const Bit_array& array)
{
    this->bit_arr.push_back(array.bit_arr[0]);
}


void Bit_array::set_length(const int value)
{
    length = value;
    int x = value/32;
    if(value%32)
    {
        ++x;
    }
    for(auto i = 0; i<x;++i)
    {
        bit_arr.push_back(0);
    }
}


unsigned int Bit_array::get_length()
{
    return length;
}


ostream& operator<<(ostream& os, Bit_array& array)
{
    int temp = array.length;
    array.pos = 0;
    for(unsigned int k = 0, i = 0,space_between_8 = 1;
        i < temp;
        ++i,++space_between_8,++k)
    {
        if((i % 32 == 0) && (space_between_8 > 1))
        {
            ++array.pos;
            k = 0;
        }
        os << array.get_bit(31-k);
        if(space_between_8 % 8 == 0)
            cout << " ";
    }
    cout << endl;
    return os;
}


bool Bit_array::get_bit(int number)
{

    if(((bit_arr[pos]>>(number))&1))
        return 1;
    else
        return 0;

}


bool Bit_array::operator[](const int value)
{
    bool x = get_bit(value);
    return x;
}


Bit_array &Bit_array::operator<<(const int value)
{
    int x = length/32;
    if(length%32)
    {
        ++x;
    }
    vector<unsigned int> bit_arr_for_mask;
    for(auto i = 0; i < x; ++i)
    {
        bit_arr_for_mask.push_back(bit_arr[i]);
    }

    for(auto i = 0; i < x; ++x)
    {
        bit_arr_for_mask[i]>>value;
    }






    return *this;
}






/*


Bit_array &Bit_array::operator>>(const int value)
{
    bit_arr[0] >>= value;
    return *this;
}


Bit_array& Bit_array::operator~()
{
    bit_arr[0] = ~bit_arr[0];
    return *this;
}


Bit_array& Bit_array::operator=(const Bit_array& array)
{
    this->bit_arr[0] = array.bit_arr[0];
    return *this;
}


Bit_array& Bit_array::operator|(const Bit_array& array)
{
    bit_arr[0]|=array.bit_arr[0];
    return *this;
}


Bit_array& Bit_array::operator&(const Bit_array& array)
{
    bit_arr[0]&=array.bit_arr[0];
    return *this;
}







void Bit_array::set_bit(const int number, const bool value)
{
    vector<unsigned int> mask;
    mask.push_back(0x1);
    mask[0]<<=number;
    if(value)
    {
        if((bit_arr[0]>>(32-number))&1)
        {

        }

        else
        {
            bit_arr[0]|=mask[0];
        }

    }

    else if(value == 0)
    {
        if((bit_arr[0]>>(32-number))&1)
        {

        }

        else
        {
            bit_arr[0]^=mask[0];
        }

    }

}

*/


