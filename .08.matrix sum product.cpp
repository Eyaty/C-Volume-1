#include<iostream>
using namespace std;
class Mat
{
        public:
    int matrix[3][3];
    int i,j,k;
void display()
    {
        for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
cout<<endl;
        }
        
        
    }
    //Input matrix
    Mat data()
    { for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
        {cin>>matrix[i][j];

    }
        }
    }
    //Add matrix
        Mat operator+(Mat m)
        { 
        Mat S;
        for(i=0;i<3;i++)
        {for(j=0;j<3;j++)
        {
        S.matrix[i][j]=matrix[i][j]+m.matrix[i][j];

        }}
        return S;}
//MUtiply mayrix
    Mat operator*(Mat m)
    {int s=0;
        Mat t;
        for(i=0;i<3;i++)
        {
            
            for(j=0;j<3;j++)
        {s=0;
            for(k=0;k<3;k++)
            {
s=s+matrix[i][k]*m.matrix[k][j];
            }
            t.matrix[i][j]=s;
             
        }

    }
  return t;
    }
     

};
int main()
{Mat m0,m1,m2,m3;
cout<<"Enter the elements of 3*3 matrix: "<<endl;
m0.data();
cout<<"Enter the elements of 3*3 matix: "<<endl;
m1.data();
m3=m1+m0;
m2=m0*m1;
cout<<"First matrix is: "<<endl;
m0.display();
cout<<"Second matrix is: "<<endl;
m1.display();
cout<<"Sum is: "<<endl;
m3.display();
cout<<"Product is: "<<endl;
m2.display();
return 0;
}