#include<iostream>
using namespace std;

template<class T>
class vector
{
    public:
     T *arr;
     int size;

     vector(int n){
         n=size;
         arr=new T[size];
         }

    T dotproduct(vector &v)
    {
        T d=0;
        for(int i=0;i<size;i++)
        {
            d+=this->arr[i]* v.arr[i];

        }
        return d;
    }
};
int main()
{
    vector<int> v1(3);
    v1.arr[0]=10;
    v1.arr[1]=20;
    v1.arr[2]=30;

    vector<int> v2(3);
    v2.arr[0]=12;
    v2.arr[1]=14;
    v2.arr[2]=16;

   cout<<v1.dotproduct(v2);

    return 0;
}