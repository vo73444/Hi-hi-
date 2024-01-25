#include <iostream>

using namespace std;

int strcmp_case_insensitive(string str1, string str2){


//makes the characters uppercase so we can compare the two strings
    for(int i = 0;i < str1.size();i++){
        str1[i] = toupper(str1[i]);

        str2[i] = toupper(str2[i]);
    }


    if(str1 == str2){
        return 0;
    }
    
    else if(str1 < str2){
        return -1;
    }
    else{
        return 1;
    }

}
