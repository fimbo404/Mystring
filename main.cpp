#include <iostream>
#include <cstring>
#include <vector>
#include "Mystring.h"

using namespace std;


int main(){
//    Mystring a{"hello"};
//    Mystring b;
//    b = a;
//    b.display();
//    // temporary object is created
//    // it is copied to b
//    // then that temporary object is deleted (goes out of scope)
//    b = "This is it";
//    b.display();
//    vector<Mystring> stoogies;
//    stoogies.push_back("larry");
//    stoogies.push_back("more");
//    stoogies.push_back("curly");
//    Mystring empty;
//    Mystring larry("larry");
//    Mystring stoogies{larry};
//    empty.display();
//    larry.display();
//    stoogies.display();

// move assignment operator 

//Mystring b{"Frank"};
//Mystring c;
//b = "Mbuke";
//c=-b;
// b.display();
// c.display();
// Mystring larry {"larry"};
// Mystring moe{"moe"};
// Mystring curly{"curly"};
// 
// Mystring stoogies ;
// stoogies = larry + moe + curly;
// stoogies.display();
// if (larry == moe)
//     cout<<" larry and moe have the same stupidity"<<endl;




    Mystring larry {"larry"};
    Mystring moe{"moe"};
    Mystring curly ;
    cin>>curly;
    cout<<"stoogies are "<<moe<<" "<<larry<<" and "<<curly<<endl;
 cout<<endl;
    }