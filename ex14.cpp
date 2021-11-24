/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Faiz Ahmed
 */

#include <iostream>
#include <string>
#include "std_lib_facilities.h"
using namespace std;

// A non-reference const can be declared. This is because 
// a non reference function taking a const param means that the
// arguments pass to the function are const and thus the 
// function cannot change the value of those params.

// It means that the value of these params can never be changed, 
// meaning that they cannot be assigned a new value. 

// We might want to do this if we need to use a fixed value variable
// throughout different functions 

// People do not use it a lot because in non reference params to functions, 
// a copy of the param is passed instead of the reference 
// meaning that the original value cannot be altered 
// thus people do not use this very often. 

// A couple of functions to show how this works.. 

void constfunc(const int param)
{
    cout<<param*10<<" \n";
}

void non_ref_func(int param)
{
    param = 10*10;
    cout<<param<<" \n";
}

int main()
{
    int var = 10;
    constfunc(10);
    non_ref_func(var);
    cout<<var<<" \n"; //value does not change
    return 0;
}