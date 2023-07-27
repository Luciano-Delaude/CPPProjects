#include <iostream>
#include "myMathlib.cpp"

using namespace std;

int main() {
    cout<<"Sqrt: "<<mySqrt(9)<<endl;
    return 0;
}


// bool canBuild(void) {
//     string text = "Spending money on others makes us happier. This is a way to send good vibes here and now";
//     string phrase = "send money now";
//     istringstream sstream(phrase);
//     string word;
    
//     while (sstream >> word)
//     {
//         if(text.find(word) == string::npos){
//             return false;
//         }
//     }
//     return true;
// }

// string reverse(string sentence) {
//     if (sentence.empty())
//         return sentence;

//     return reverse(sentence.substr(1)) + sentence[0];
// }

// int main() {
//     string sentence = "Go work";
//     string reversed = reverse(sentence);
//     cout << "The reversed sentence is: " << reversed << endl;
//     return 0;
// }