https://www.codingninjas.com/codestudio/problems/reverse-the-array_1262298?leftPanelTab=1

#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    vector<int> v;
    for(int i=m+1; i<arr.size(); i++)
    {
       int temp = arr[i];
       v.push_back(temp);
    }
    arr.resize(m+1);
    for(int j=v.size()-1; j>=0; j--)
    {
        arr.push_back(v[j]);
    }
   
}



