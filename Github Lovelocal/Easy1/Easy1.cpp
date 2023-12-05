#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int lengthOfLastWord(const string& s) {
    //Creates an object iss for the class istringstream
    istringstream iss(s);
    string word;

    // Extract words from the string
    while (iss >> word) {}

    // Return the length of the last word
    return word.length();
}

int main() {
    string s;
    getline(cin,s);             //Input string
    int l=s.length();           //Returns length of the string
    while((l>=1)&&(l<=148))     //Given constraints
    {int result = lengthOfLastWord(s);
    cout << "Length of the last word: " << result << endl;
    exit(0);
    }
    //If the string length exceeds the limit
    cout<<"Invalid String";
    return 0;
}
