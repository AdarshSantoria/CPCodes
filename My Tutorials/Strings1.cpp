  
 /**
  * @author Adarsh Santoria
  * A string variable contains a collection of characters surrounded by double quotes
  * Can behave like an array of characters
  * For more information refer geeksforgeeks, w3school, cplusplus.com
  */

 #include <bits/stdc++.h> // best header file
 // It includes almost all libaries of c++
 using namespace std;

 int main()
 { 
 // main code will be written inside this function

    // initialization by raw string
    string str = "1st string";
    string str1("first string");
    // initialization by another string
    string str2(str1);
    // initialization by character with number of occurrence
    string str3(5, '#'); // #####
    // initialization by part of another string
    string str4(str1, 6, 4); //    from 6th index, string of length 4
    // initialization by part of another string : iterator version
    string str5(str2.begin()+1, str2.begin() + 5);

    cout << str << endl;
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5 << endl;
 }
