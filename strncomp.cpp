#include <iostream>
#include "comparison.h"

using namespace std;


int main(){
    cout << "The comparison of 'string one' and 'string two' returns ";
    cout << strcmp_case_insensitive("my cool strin", "MY Co", 0) << '\n';
}
//g++ comparison.cpp strncomp.cpp
