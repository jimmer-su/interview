/*
Given an unsorted list of intergers, write a function that returns a new list with all duplicate values removed.
*/
#include <iostream>
#include "remove_duplicates.hpp"

list<int> removeDuplicated(const list<int> &in)
{
    list<int> out; 
    for(auto ival:in)
    {
        bool found = false;
        for(auto oval:out)
        {
            if(ival == oval) {
                found = true;
                break;
            }
        }
        if( !found ) {
            out.push_back(ival);
        }
    }
    return out;
}

