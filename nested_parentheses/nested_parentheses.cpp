#include <iostream>

using namespace std;

bool check_nested(const string in)
{
    int count = 0;
    for(int i = 0; i < in.length(); ++i){
        char ch = in[i];
        if(ch == '(')
            ++count;
        else if(ch == ')')
            --count;
            if( count < 0) return false;
    }
    return (count == 0);

}