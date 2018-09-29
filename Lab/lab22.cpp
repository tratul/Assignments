#include<bits/stdc++.h>
using namespace std;

string Simple_Reflex_Agent(char location, char status){
    if(status=='D')
        return "Suck";
    else if(location=='A')
        return "Right";
    else if (location=='B')
    return "left";
}

