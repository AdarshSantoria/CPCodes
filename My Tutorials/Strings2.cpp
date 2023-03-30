 
 /**
  * @author Adarsh Santoria
  * A string variable contains a collection of characters surrounded by double quotes
  * Can behave like an array of characters
  * For more information refer geeksforgeeks, w3school, cplusplus.com
  */

 #include <bits/stdc++.h>
 using namespace std;

 string s3;
 int main()
 { 
    string s = "I am a \nstring\n";
    cout << s;
    /**
     * Some basic functions
     * Note - Unlike Python, use double quotes in string and single quote in char
     */
    
    // Size or length of String
    cout<< s.size() << ' ' << s.length() << endl;
    // .size() is preferred ( can also be used for other data types like vector, map)

    // emptying a string
    s.clear();  // s become ""
    cout << s << ' ' << s.size()<<endl;

    string s1, s2 = "StRiNg";
    cout << s1 <<endl; // it will take any garbage value

    cout << s3 <<endl; // it will be empty as globally declared
    /**
     * Similarly globally declared int, bool will be zero
     * What happen when we declare array globally ?
     * Let' find out
     */
    s = "Hello IITians";
    // pop and push like list in python but only at back
    s.pop_back();
    s.push_back('$');
    cout << s << endl;
     
    // Opeartions like an array
    cout<< s << ' ' << s2 << endl;
    swap(s[2], s[4]);
    cout<< s << ' ' << s2 << endl;
    swap(s[2], s2[3]);
    cout<< s << ' ' << s2 << endl;
    s[1] = '1';
    s2[3] = '4';
    cout<< s << ' ' << s2 << endl;
    // Kick
    swap(s, s2);
    cout<< s << ' ' << s2 << endl;

    // String to Array
    char arr[s2.size()];

    for(int i = 0; i < s2.size(); i++)
        arr[i] = s2[i];

    /**
     * Let us solve something
     * P1 - https://codeforces.com/problemset/problem/1517/A
     * S1 - https://codeforces.com/contest/1517/submission/190971197
     * P2 - https://codeforces.com/problemset/problem/1759/A
     * S2 - https://codeforces.com/contest/1759/submission/190967939
     * P3 - https://codeforces.com/problemset/problem/1706/A
     * S3 - https://codeforces.com/contest/1706/submission/190964549
     * P4 - https://codeforces.com/problemset/problem/1547/B
     * S4 - https://codeforces.com/contest/1547/submission/190970675
     */
 }
