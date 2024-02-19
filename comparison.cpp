#include <iostream>

using namespace std;

int strcmp_case_insensitive(string str1, string str2, int max = 0){


//makes the characters uppercase so we can compare the two strings
    if(max == 0){

        for(int i = 0;i < str1.size();i++){
            str1[i] = toupper(str1[i]);

            str2[i] = toupper(str2[i]);
        }
    }

    else if(max < 0 || max > str1.size() || max > str2.size()){
        return -1;
    }

    else{
        str1 = "";
        str2 = "";

        for(int i = 0;i < (max - 1);i++){

            str1 = str1 + (char)toupper(str1[i]);

            str2 = str2 + (char)toupper(str2[i]);
    
        }
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
