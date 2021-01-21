/*
Write a function that reverse a string without using any library functions
*/
#include <iostream>
#include "reverse_str.hpp"

string reverseStr(string in)
{
    string out = "";
    int len = in.length();
    for(int i=len-1; i>=0; --i){
        out += in[i];
    }
    return out;
}
