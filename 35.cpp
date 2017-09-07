#include <string> 
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
char c;
string s;
char answer;
while(1) {

    cout << "Enter: ";
    cin >> c;
    cout << "Enter specified character: ";
    getline(cin, sentence);
    if(c == '\n' || sentence.empty())
    {
        cout << "Please enter a valid answer:\n";
        break;

    }


    else {
        int count = count(begin(sentence), end(sentence), c);
        cout << "Your sentence had" << count << character 
             << "c(s)"; 
     }

cout << "Do you wish to enter another sentence (y/n)?: ";
cin >> answer;
if (answer == 'n'){
    break;
    }
}
return 0;
}
