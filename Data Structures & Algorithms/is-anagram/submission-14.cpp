class Solution {
public:
    bool isAnagram(string s, string t) {
    std::unordered_map<char, int> letters;
    int count = 0;
    std::vector<int> first;
    for(char c:s){
        letters[c]++;
    }
    for(int i = 0;i<letters.size();i++){
        first.push_back(letters[i]);
    }
    for(char q : t){
        letters[q]++;
    }
    for(int i = 0;i<letters.size();i++){
    if(first[i]==letters[i]/2){
    count++;
    }
        else{
            return false;
        }
    }
    return true;
    }
    
};
