/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 barhom alko
 */

#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include <forward_list>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <array>
#include <regex>
#include<random>
#include<stdexcept>

using namespace std;

vector<string> s_digits;

void init_vector() {
    s_digits.push_back("zero");
    s_digits.push_back("one");
    s_digits.push_back("two");
    s_digits.push_back("three");
    s_digits.push_back("four");
    s_digits.push_back("five");
    s_digits.push_back("six");
    s_digits.push_back("seven");
    s_digits.push_back("eight");
    s_digits.push_back("nine");
}

// tries to read an integer from input. if this fails, input is cleared and read in as string.
int get_number()
{
    int inp = 0;
    if (cin>>inp)
        return inp;
    cin.clear();
    string inp_s;
    cin >> inp_s;
    for (int i = 0; i<s_digits.size(); ++i) {
        if (s_digits[i]==inp_s)
            return i;
    }
    // only executes if input is incorrect
    return(-1);
}
