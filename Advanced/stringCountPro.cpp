#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "How   mAny Words78";
    int vowel = 0, consonant = 0, space = 0;

    for(int i=0; str[i] !='\0'; i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || 
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowel++;
        }
        else if(str[i] == ' ' && str[i+1] != ' '){  // space must not be followed by another space
            space++;
        }
        else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i <= 'z'])){
            consonant++;    
        }
        else {
            continue; // skip as not counting for special characters and numbers.
        }
    }
    cout<<"Number of vowels in the string is: "<<vowel<<endl;
    cout<<"Number of consonants in the string is: "<<consonant<<endl;
    cout<<"Number of words in the string is: "<<space + 1<<endl;

    /*
    While counting for consonants
    Use extra parenthesis to avoid ambiguity becoz && have higher precedence than ||
    Also use character literlas instead of their ASCII values
    */
    return 0;

}