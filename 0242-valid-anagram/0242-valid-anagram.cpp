class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpp;
        unordered_map<char,int>map;
        for(int i=0;i<s.length();i++){
            mpp[s[i]-'a']++;
 }
         for(int i=0;i<t.length();i++){
            map[t[i]-'a']++;
         }
         if(mpp==map){
            return true;
         }
         else return false;

 

        

        
    }
};