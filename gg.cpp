#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() 
{ 
    string str = "This is a string"; 

    vector<string> words; 

    string word; 

    for (string x : words) { 

        if (x == ' ') { 

            words.push_back(word); 

            word = ""; 
        } else { 

            word = word + x; 
        } 
    }  

    words.push_back(word);  

    for (auto x : words) {  

        cout << x << endl;  
    }  

    return 0;  
}


