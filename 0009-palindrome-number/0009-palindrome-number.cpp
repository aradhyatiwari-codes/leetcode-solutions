class Solution {
public:
    bool isPalindrome(int x) {
        int dup=x;
        long long rev=0;
        if(x>INT_MAX||x<INT_MIN)return 0;
        if(x<0){return false;}
        while(x!=0){
            int last=x%10;
            rev=rev*10+last;
            x=x/10;
        }
        if(dup==rev){
            return true;
        }
        return false;
    }
    
    
};