#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "How mAny Words";
    int vowel = 0, consonant = 0, space = 0;

    for(int i=0; str[i] !='\0'; i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || 
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowel++;
        }
        else if(str[i] == ' '){
            space++;
        }
        else{
            consonant++;
        }
    }
    cout<<"Number of vowels in the string is: "<<vowel<<endl;
    cout<<"Number of consonants in the string is: "<<consonant<<endl;
    cout<<"Number of words in the string is: "<<space + 1<<endl;

    return 0;

    /*
    Refere to stringCountPro.cpp present in Advanced directory to know how to deal with 
    1. if multiple spaces are present in between two words
    2. if any special characters or number is present
    first try it by yourself then refer to the solution.

    string str = "How   mAnY wOrds78";
    
    */
}