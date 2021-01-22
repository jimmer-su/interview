#include <iostream>
#include <string>
#include <list>
#include "remove_duplicated/remove_duplicates.hpp"
#include "reverse_string/reverse_str.hpp"
using namespace std;

int main(void)
{
    /*
    revserse string
    */
    string in = "go home";
    string out = "";
    out = reverseStr(in);
    cout << "===== reverse string =====" << endl;
    cout << "in:" << in << " / out:" << out << endl;

    /*
    remove duplicates
    */
    list<int> value{5, 1, 2, 1, 9, 3, 2, 1, 8, 9, 4, 6, 6, 4, 7};
    list<int> result;
    list<int>::iterator it;
    cout << "===== remove duplicates =====" << endl;
    cout << "Input: ";
    for(it=value.begin(); it!=value.end(); ++it){
        cout << *it << " ";
    }
    cout << endl << "Output: ";
    result = removeDuplicates(value);
    for(it=result.begin(); it!=result.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    /*
    remove duplicates2
    */
    cout << "===== remove duplicates =====" << endl;
    cout << "Input: ";
    for(it=value.begin(); it!=value.end(); ++it){
        cout << *it << " ";
    }
    cout << endl << "Output: ";
    result = removeDuplicates2(value);
    for(it=result.begin(); it!=result.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;


    return 0;
}