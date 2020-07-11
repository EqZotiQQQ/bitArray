#ifndef BIT_ARRAY_H
#define BIT_ARRAY_H

#include <iostream>
#include <vector>


using namespace std;


class Bit_array
{
private:
    vector<unsigned int> bit_arr;
    unsigned int length;
    unsigned int pos;
public:
    Bit_array(const unsigned int value);
    Bit_array(const Bit_array& array);
    Bit_array &operator<<(const int value);
    Bit_array& operator>>(const int value);
    Bit_array& operator~();
    Bit_array& operator=(const Bit_array& array);
    Bit_array& operator|(const Bit_array& array);
    Bit_array& operator&(const Bit_array& array);
    bool operator[](const int value);
    bool get_bit(int number);
    void set_bit(const int number, const bool value);
    void set_length(const int value);
    friend ostream& operator<<(ostream& os, Bit_array& array);
    unsigned int get_length();


    /*






    */
};

#endif // BIT_ARRAY_H
