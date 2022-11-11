#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int> PatternTwoDimensionalSum(vector<vector<int>> array)
{

    int total1 =0;int total2 = 0;
    vector<int> result;
    for(int i=0;i<array.size();i++)
    {
         total1 = total1+array[i][i];
    }
    
    for(int j=array.size()-1,i=0;j>=0;j--,i++)
    {
            total2 = total2 +array[i][j];
            
    }
    result.push_back(total1);
    result.push_back(total2);
    return result;

        
 
}
 


int main() {
    
    // {
    //  {'1','1','1'};
    // int array2[]= {'2','2','2'};
    // int array3[]= {'3','3','3'};
    // vector<vector<int>> array;
    //   for(int i =0;i<array.size();i++)
    //   {
          
    //       array.push_back(array1[i]);
    //       array.push_back(array2[i]);
    //       array.push_back(array3[i]);

    //   }

    
    // int A=PatternTwoDimensionalSum(array);
    // std::cout<<A;
    // }


    vector<vector<int>> array = {{1,1,1},{2,2,2},{3,3,3}};

    vector<int> vi =  {1,2,3,4,5};
    vector<int> vi2 = {1,2,3,4,5};
    vector<int> vi3 = {1,2,3,4,5};

    array.push_back(vi);
    array.push_back(vi3);
    array.push_back(vi2);    
    
    vector<int> A=PatternTwoDimensionalSum(array);
    for(int i = 0;i<A.size();i++)
    std::cout<< A[i];


    return 0;

}



