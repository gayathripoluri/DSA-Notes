/*✅ Why Use stringstream?
1)Splitting Strings:Easily split a string by spaces, tabs, or custom delimiters without manually iterating.

2)Converting Data Types:Convert between strings and other data types (like int, double, etc.) easily.

3)Efficient String Manipulation:Read and write to a string stream just like you would with cin or cout.

🚀 Basic Syntax and Example:*/

#include <iostream>
#include <sstream>   // Include the stringstream header
#include <string>
using namespace std;

int main() {
    string sentence = "Hello world 123";  
    stringstream ss(sentence);  // Create a stream from the string

    string word;  
    while (ss >> word) {        // Extract each word from the stream
        cout << word << endl;   // Print each word
    }

    return 0;
}

/*✅ Explanation:
stringstream ss(sentence) → Creates a stream object from the string sentence.

ss >> word → Extracts each word (separated by spaces) one by one into the variable word.

Output:
Hello  
world  
123  

🔥 Use Cases of stringstream:

1. Splitting a String into Words:*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string sentence = "C++ is awesome";
    stringstream ss(sentence);  // Create string stream
    string word;
    
    vector<string> words;
    
    while (ss >> word) {        // Extract words separated by spaces
        words.push_back(word);  
    }

    // Display words
    for (const auto& w : words) {
        cout << w << endl;
    }

    return 0;
}

✅ Output:
C++  
is  
awesome  

/*2. Converting String to Integer/Double:*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string str = "12345";
    int num;
    
    stringstream ss(str);
    ss >> num;                // Convert string to int

    cout << "Integer: " << num << endl;
    
    return 0;
}
✅ Output:

Integer: 12345


/*3. Combining Multiple Data Types into a String:*/

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;
    int age = 25;
    double height = 5.9;
    string name = "Alice";

    // Combine different data types into a single string
    ss << "Name: " << name << ", Age: " << age << ", Height: " << height;

    cout << ss.str() << endl;  // Print the entire stream as a string

    return 0;
}
✅ Output:
Name: Alice, Age: 25, Height: 5.9

/*💡 Key Benefits of stringstream:
Efficiency:

stringstream is faster and easier to use for splitting strings compared to manual parsing.

Data Conversion:

Easily convert between strings and other data types (like int, double, etc.).

Convenience:

Read and write operations behave just like cin and cout.

✅ When to Use stringstream:
String Splitting: When you need to split a string into individual words or tokens.

Data Conversion: When you want to convert between strings and other data types.

String Formatting: When you want to efficiently combine different data types into a formatted string.

🔥 Bottom Line:
stringstream is a powerful and efficient tool in C++ for string manipulation, parsing, and type conversion. It makes handling complex string operations much easier and more readable. 🚀*/