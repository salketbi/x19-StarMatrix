#include <iostream>
#include <vector>

using namespace std;
int main()
{

int rows, cols;
cout<<"Enter rows and columns of stars: ";
cin>> rows >> cols;
if(rows > 0 && cols > 0)
{
vector<vector<int> > star_matrix(rows,vector<int>(cols,0));
for(int i =0; i < star_matrix.size();i++)
{
for(int j =0; j< star_matrix[i].size();j++)
{
cout<<" * ";
}
cout<<endl;
}
}

return 0;
}

