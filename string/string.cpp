
#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
     // string input as many words
      string name;
     // getline(cin,name);
  
  string s1="fam", s2="ily";
  
//  s1.append(s2);
//  cout<<s1<<endl;

     // concatenate two strings
     cout<<s1+s2<<endl;
     
     // print perticular index value of strings
     cout<<s1[2]<<endl;
     
     // clear strings
     string abc = "sfsffdsfdg";
     abc.clear();
     cout<<abc<<endl;
     
     // compare strings
     string string1 = "abc";
     string string2 = "abc";
     if(!string1.compare(string2)){
          cout<<"strings are equal"<<endl;
     }
     cout<<string2.compare(string1)<<endl;
     
     // check empty
     if(abc.empty()){
          cout<<"String is empty"<<endl;
     }
     
     // erase 
     string british = "nincompoop";
     british.erase(3,3); // from 3 erase 3 elements
     cout<<british<<endl;
     
     // find 
     cout<<british.find("nin")<<endl;
     
     // length (size)
     cout<<british.size()<<" also "<<british.length()<<endl;
     
     // insert
     british.insert(7,"_lol");
     cout<<british<<endl;
  
     // get substring
     string subStr = british.substr(7,4);
     cout<<subStr<<endl;
     
     // numberic string to integer
     string tahir = "992";
     int x = stoi(tahir);
     cout<< x+1 <<endl;
     
     // integer to string
     cout<<to_string(x) + "85"<<endl;
     
     // sorting a string
     string blabla = "zxcvbnmasdfghjkle";
     sort(blabla.begin(), blabla.end());
     cout<<blabla;
    return 0;
}
