#include<iostream>
#include<vector>

using namespace std;

int main()
{
    std::vector<int> v;
    v.push_back(5);
    v[0]=3;
    int num = v.at(5)
    v.pop_back();
    v.clear();


    //int num[5];

    // can do the iterator for every type


    //iterate menage for you, no worry about out of bound and size;
    for(int * i = num; i<num+5;i++ )// iterate array num by using pointer
    {

    }   
    
    // can do the iterator for every type
    std::vector<int>::iterator i = v.begin();
    //loop changed! 
    for(vector<int>::iterator i = v.begin();; i<v.end();i++ )// iterate array num by using pointer
    {
        *i=i//dereferrnd
    }   
}