//Strings:
1)substr(i, n.size()):
/*Eg :i → starting index of the substring
n.size() → number of characters to extract*/

string haystack = "hellocode";
string needle = "lo";

for (int i = 0; i <= haystack.size() - needle.size(); i++) {
    cout << haystack.substr(i, needle.size()) << endl;
}

2)max(val1,val2)
3)max_element(it1,it2)
