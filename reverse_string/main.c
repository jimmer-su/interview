#include <iostream>
#include <string>
using namespace std;

static string reverseStr(string in)
{
    string out = "";
    int len = in.length();
    for(int i=len-1; i>=0; --i){
        out += in[i];
    }
    return out;
}

int main() {
    string in = "go home";
    string out = "";
    out = reverseStr(in);
    cout << "in:" << in << " out:" << out << endl;
}