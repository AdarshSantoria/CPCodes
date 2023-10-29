class Solution {
public:
    string reverseVowels(string s) {
        string ss="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
                ss.push_back(s[i]);
            }
        }
        reverse(ss.begin(),ss.end());
        int x=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
                s[i]=ss[x];
                x++;
            }
        }
        return s;
    }
};
