//Create a program that uses a function template to perform generic matrix operations 
//(addition, multiplication). 
#include<iostream>
using namespace std;
  template<typename T>
void add(T a[2][2],T b[2][2]){
cout<<"Addition"<<endl;
 for(int i=0;i<2;i++,cout<<"\n")
    for(int j=0;j<2;j++)
     cout<<a[i][j]+b[i][j]<<endl;
}
    template<typename T>
void multiply(T a[2][2],T b[2][2]){
cout<<"multiply"<<endl;
for(int i=0;i<2;i++,cout<<"\n")
  for(int j=0;j<2;j++){
  T sum=0;
  for(int k=0;k<2;k++)
  sum+=a[i][k]*b[k][j];
  cout<<sum<<endl;
}

}
  int main(){
    int A[2][2]={{1,2},{3,4}};
    int B[2][2]={{5,6},{7,8}};
    add(A,B);
    multiply(A,B);

  }
        
     