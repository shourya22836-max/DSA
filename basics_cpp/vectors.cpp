// vector stores the element as similar as array does 

#include <iostream>
using namespace std;

void(){

    vector<int> v;

    v.push_back(1); //inserts an 1 into vector
    v.emplace_back (2); //similate to push_back 

    vector<pair<int,int>>vec;

    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int>v(5,100); //{100,100,100,100,100}

    vector<int>v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);


    vector<int>::
}