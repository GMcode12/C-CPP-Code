#include<iostream>
using namespace std;
class cmatrix
{
    int mat[3][3];
    int i,j;

    public:

    void getdata();
    void display();
    void unit_mat();
    cmatrix add(cmatrix,cmatrix);
    int mul(cmatrix,cmatrix);

};

void cmatrix:: getdata()
{
    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++)
        {
            cin>>mat[i][j];
        }
    }
}

void cmatrix:: display()
{
    for(i=0;i<3;i++)
    {   
            cout<<"\n"<<"[";
            for(j=0;j<3;j++)
            {
                if(j==2)
                { cout<<mat[i][j];}
                else{ cout<<mat[i][j]<<"\t";}
            }

            cout<<"]";
    }

}

void cmatrix::unit_mat()
{
    for(i=0;i<3;i++)
    {  
        for(j=0;j<3;j++)
        {
            mat[i][j]=1;
        }
    }

}


cmatrix cmatrix::add(cmatrix a,cmatrix b)
{
    cmatrix temp;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            temp.mat[i][j]=a.mat[i][j]+b.mat[i][j];
        }
    }
    
    return temp;
}

int main()
{
    cmatrix m1;
    m1.getdata();
    m1.display();

    cmatrix m2;
    m2.getdata();
    m2.display();

    cmatrix m3;
    m3=m3.add(m1,m2);
    cout<<endl<<"Addition of the matrices is: "<<endl;
    m3.display();
    return 0;
}