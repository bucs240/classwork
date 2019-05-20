#include<iostream>
#include<vector>

using namespace std;

int main()
{
    std::vector<string> v;
    v.push_back("eggs");
    v.push_back("milk");
    v.push_back("sugar");
    v.push_back("chocolate");
    v.push_back("flour");
    

    // print
    for(vector<string>::iterator i = v.begin(); i<v.end();i++ )// iterate array num by using pointer
    {
        cout<<"printing out: "<<*i;
    }  

    v.pop_back();
    v.push_back("coffee");

    
    for(vector<string>::iterator i = v.begin(); i<v.end();i++ )// iterate array num by using pointer
    {
        if(*i=="sugar")
        {
            *i="honey";
            break;
        }
    } 
    for(vector<string>::iterator i = v.begin(); i<v.end();i++ )// iterate array num by using pointer
    {
        if(*i=="milk")
        {
            v.erase(i);
            break;
        }
    } 
}