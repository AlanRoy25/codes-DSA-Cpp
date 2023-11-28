#include <bits/stdc++.h>

bool isValid(char ch) {
  return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9'); //checking for all the characters , numbers upper case and lower case
}

char toLowercase(char ch) {
  if (ch >= 'A' && ch <= 'Z') {
    return ch - 'A' + 'a'; // from Uppper case to lower case conversion
  }
  return ch;
}

bool checkPalindrome(string s) {
  int start = 0;
  int end = s.size() - 1;

  while (start <= end) {
    if (isValid(s[start]) && isValid(s[end])) //This checks if both characters at positions start and end are valid alphanumeric characters (letters or numbers). 
    {
      if (toLowercase(s[start]) != toLowercase(s[end])) // If both characters are valid, it compares their lowercase versions. If they are not equal, the function returns false, indicating that the string is not a palindrome. {
        return false;
      } else { // If the characters are valid and equal, the loop moves to the next pair of characters towards the center.
        start++;
        end--;
      }
     else {
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

/*
R1: c 1   O $  d @  e e  D   o 1 c
    ^                            ^
start                          end

c 1   O $  d @  e e  D   o 1 c
^                            ^
start                       end

R2: if both are same and its alphacharc then move ahead

c 1   O $  d @  e e  D   o 1 c
  ^                        ^
  start                   end

R3 : ignoring the spaces and if its not alphanumeric characters return false and move ahead;
c 1   O $  d @  e e  D   o 1 c
      ^                 ^
    start                end
R4: Skip non alphaumeric char $ is not valid move forward and check if D and d is true then forward

c 1   O $  d @  e e  D   o 1 c
          ^           ^
      start           end

R5: check if e&e is same then return true and move forward but then s >e to avoid that we use the condition s<=e
c 1   O $  d @  e e  D   o 1 c
                            ^
                            start/end
