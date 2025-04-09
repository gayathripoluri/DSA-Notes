/*Converting Alphabets to Numbers in C++

📚 + Predefined String Functions You Should Know
🧠 Concept: Mapping Alphabets to Numbers
We often want to convert alphabets into numbers for tasks like encryption, pattern matching, or frequency analysis.

✅ Mapping Logic:
Uppercase: 'A' → 1, 'B' → 2, ..., 'Z' → 26
👉 Formula: ch - 'A' + 1

Lowercase: 'a' → 1, 'b' → 2, ..., 'z' → 26
👉 Formula: ch - 'a' + 1

🧪 Example 1: Convert a Single Character*/

#include <iostream>
using namespace std;
int main() {
    char ch = 'C';
    int value = ch - 'A' + 1;
    cout << ch << " -> " << value << endl;
    return 0;
}
🧾 Output: C -> 3

//🧪 Example 2: Convert a String of Alphabets

#include <iostream>
#include <string>
using namespace std;
int main() {
    string input = "abcXYZ";
    for(char ch : input) {
        if(isupper(ch))
            cout << ch << " -> " << (ch - 'A' + 1) << endl;
        else if(islower(ch))
            cout << ch << " -> " << (ch - 'a' + 1) << endl;
    }
    return 0;
}
🧾 Output:

a -> 1  
b -> 2  
c -> 3  
X -> 24  
Y -> 25  
Z -> 26

/*🧰 Bonus: C++ Predefined String Functions You Must Know
Here’s a powerful set of C++ string functions that you should keep in your DSA and projects toolkit:

Function	                Description	Example
s.length() or s.size()	    Get string length	s = "abc"; cout << s.length(); // 3
s.empty()	                Check if string is empty	if(s.empty())
s.append("xyz")	            Add to the end of string	s = "abc"; s.append("xyz"); // abcxyz
s + "xyz"	                Concatenation	s = s + "xyz";
s.substr(pos, len)	        Get substring	"abcdef".substr(2, 3) // "cde"
s.find("abc")	            Find position of substring	s.find("abc") // returns index
s.erase(pos, len)	        Remove part of string	s.erase(1, 2)
s.insert(pos, "xyz")	    Insert substring	s.insert(1, "xyz")
s.compare("another")	    Compare strings (returns 0 if equal)	s.compare("abc") == 0
toupper(ch) / tolower(ch)	Convert case of a char	tolower('A') // 'a'
stoi(s) / to_string(num)	Convert string to int and vice versa	stoi("123") // 123

🔥 Pro Tip: ASCII Value Reference
Character	ASCII
'A'	65
'Z'	90
'a'	97
'z'	122

You can convert characters to ASCII with:*/
int ascii = (int)ch;

//And from ASCII to char:
char ch = (char)97; // 'a'