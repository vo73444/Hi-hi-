#include <iostream>
#include "comparison.h"

using namespace std;


int main(){
    cout << "The comparison of 'string one' and 'string two' returns ";
    cout << strcmp_case_insensitive("my cool string", "My cOOl stRinG") << '\n';

    return 0;
}
