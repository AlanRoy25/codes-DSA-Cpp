class Solution {
private:
bool isValid(char ch){
    return (ch >='A' && ch <='Z'|| ch >='a' && ch <='z' || ch >='0' && ch<='9');
}
char isLowercase(char ch){
    if(ch >='A' && ch <='Z'){
        return ch-'A' + 'a';
    }
    return ch;
}
bool checkPalindrome(string s) {
  int start = 0;
  int end = s.size() - 1;

  while (start <= end) {
    if (isValid(s[start]) && isValid(s[end])) {
      if (isLowercase(s[start]) != isLowercase(s[end])) {
        return false;
      } else { 
        start++;
        end--;
      }
     }else {
      // If either character at the position  is not valid, move to the next character, skipping it 
      if (!isValid(s[start])) {
        start++;
      }
      if (!isValid(s[end])) {
        end--;
      }
    }
}

    return true;
    }
public:
    bool isPalindrome(string s) {
    int start =0;
    int end = s.size()-1;
    while(start<=end){
        if(isValid(s[start]) && isValid(s[end])){
            if(isLowercase(s[start]) != isLowercase(s[end])){
                return false;
            }
            else{
                start++;
                end--;
            }
            }
            else {
            if(!isValid(s[start])){
                start++;
            }
            if(!isValid(s[end])){
                end--;
            }
        }
    }
        
        return checkPalindrome(s);
}
};