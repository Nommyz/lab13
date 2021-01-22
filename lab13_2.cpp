#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool a[][N])
{
    int i,j;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
        
            if(a[i][j]==1)
            {
                cout << "1 ";
                if(j==N-1) cout << "\n" ;
            }
            else
            {
                cout << "0 ";
                if(j==N-1) cout << "\n" ;
            }
        }

}
void inputMatrix(double m[][N])
{
  for(int i=0;i<N;i++)
    {
    cout << "Row "<< i+1 << ": ";  
    for(int j=0;j<N;j++)
        {
            cin >> m[i][j];
        }
    }
}
void findLocalMax(const double m[][N], bool a[][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
            for(j=0;j<N;j++)
        {
               
           if(m[i][j]>=m[i+1][j]&&m[i][j]>=m[i-1][j]&&m[i][j]>=m[i][j+1]&&m[i][j]>=m[i][j-1])
            {
                a[i][j] = 1;
                
            }
           else
           {
                a[i][j] = 0;
           }
         
               a[0][j] = 0;
               a[N-1][j] = 0;
               a[i][0] = 0;
               a[i][N-1] = 0;    
        }
        
    }

}