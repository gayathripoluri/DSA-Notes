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
4)min(val1,val2)
5)__gcd(a,b)
6)stoi(s) → string to int
7)stol(s) → string to long
8)s1.substr(0,n)->string slicing kindaa from 0 to n



