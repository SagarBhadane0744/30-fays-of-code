#include <iostream>
using namespace std;

int main()

{
    string phrase;
    phrase = "I am very happy today, this is the great day of my life";
    cout << phrase.length() << endl; 
    cout << phrase[2] << endl;
    cout << phrase[51] << endl;
    phrase[0] = 'm'; //change the things in given strings.
    cout << phrase <<endl;
    cout << phrase.find("very"); //find starting indexing of the given string.
}