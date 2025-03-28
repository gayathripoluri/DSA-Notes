/*Question:There given a paragraph, count the frequency of each word in it. Words are separated by spaces.
The output should be in the format "word-frequency", one per line.
 Eg:1) For the paragraph "hello world hello", the output should be:
 hello-2
 world-1 
 2)Paragraph: "the quick brown fox jumps over the lazy dog the quick brown fox jumps over the lazy dog"
  
 Output:  
    the-2
    quick-2
    brown-2
    fox-2
    jumps-2
    over-2
    lazy-2
    dog-2*/ 


//Bruteforce Approach: Using Hashing and String Manipulation
// We can iterate through the paragraph, extract each word, and use a hash map to count the frequency of each word.
class solution{
    public:
    void countWords(map<string, int>& wordCount, const string& paragraph) {
        int n=paragraph.size();
        int p=0;
        string s="";
         for(int i=0;i<=n-1;i++){
             if(paragraph[i]!=' ') s+=paragraph[i];
             else if(!s.empty()){
                 wordCount[s]++; //Hashing
                 s="";
             }
         }
         if(!s.empty()) wordCount[s]++;
        
    }
    
    void displayWordCount(const map<string, int>& wordCount) {
        for(auto i:wordCount){
            cout<<i.first<<"-"<<i.second<<endl;
        }
        
    }
};

//Optimised Using String Stream: stringstream is a powerful tool for parsing strings efficiently.
// It allows us to treat a string as a stream, making it easy to extract words one by one without manual parsing. Just like string slicing in python  

class solution{
    public:
    void countWords(map<string, int>& wordCount, const string& paragraph) {
        stringstream ss(paragraph);
        string w;
        while(ss>>w){
            wordCount[w]++;
        }
        
    }
    
    void displayWordCount(const map<string, int>& wordCount) {
        for(auto i:wordCount){
            cout<<i.first<<"-"<<i.second<<endl;
        }
        
    }
};