#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    //writing in file 
    string data="this is text file for learning file handling.cpp";
    string name="Ganesh Mahajan\nDinesh mahajan";
    
    ofstream out("sample1.txt");
    
    out<<data<<endl;
    out<<name<<endl;
    
    // reading file
    
    string sample;
    ifstream in("sample1.txt");
    getline(in,sample);
    // getline(in,sample);
    // getline(in,sample);

    cout<<endl<<sample<<endl;
    
    
    
    
    
    
    
    
    
    

    
    return 0;
}