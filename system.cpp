

#include <cstdlib>
#include <iostream>
#include <fstream>
// #include <string.h>
#include<iomanip>
// #include<conio.h>
// #include<stdlib.h>

using namespace std;

fstream f;

class stud
{
    char name[64];
    short age;
    int id;

    public :

    void put_details();
    void get_details();
    int get_code()
    {
        return id;
    }
    
};

stud obj;

void stud::get_details()
{
    cout<<"Enter your id: ";
    cin>>id;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your age: ";
    cin>>age;

}

void stud::put_details()
{
    cout<<"\t"<<id<<setw(15)<<name<<setw(15)<<age;
}


void add_record();
void show_all();

void add_record()
{
    char a='y' ;
    f.open("text.txt", ios::app| ios::binary);
    
    while(a== 'Y'||a=='y')
    {
        obj.get_details();
        f.write((char*)&obj,sizeof(obj));
        
        cout<<"Do you want to add more record?(Y/N) ";
        cin>>a;

    }
    f.close();
    
}

void show_all()
{
    system("cls");

    f.open("text.txt", ios::in | ios::binary);
    cout<<"\t"<<"ID"<<setw(15)<<"NAME"<<setw(15)<<"AGE";
    while(f.eof()==0)
    {
        obj.put_details();
        f.read((char*)&obj,sizeof(obj));
        
    }

    f.close();
    
    

}





int main()
{
    
    system("cls");
    
    // add_record();  
    show_all();


    return 0;
}