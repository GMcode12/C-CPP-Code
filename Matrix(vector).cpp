#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int>> &vec);
vector<vector<int>> add_vec(vector<vector<int>> &vec,vector<vector<int >>& vec1)
{
    vector<vector<int>>temp;
    for(int i=0;i< vec.size();i++)
    {   vector<int>ch;
        for(int j=0;j<vec[i].size();j++)
        {   int sum;
            sum=vec[i][j]+vec1[i][j];
            ch.push_back(sum);
        }
        temp.push_back(ch);
        
    }
    return temp;
}

void print(vector<vector<int>> &vec)
{
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<"  ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<vector<int>>v1={{1,2,3},{4,5,6}};
    vector<vector<int>>v2={{1,2,3},{4,5,6}};
    // print(v1);
    // print(v2);
  
    vector<vector<int>> result=add_vec(v1,v2);
    print(result);
     return 0;
}
