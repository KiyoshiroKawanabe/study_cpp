#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int some=0;
  vector<int> vec_1{2,4,6,8,10,12,14,16,18,20};
  auto itr_first = vec_1.begin();
  vector<int> vec_2{10,9,8,7,6,5,4,3,2,1};
  auto itr_second = vec_2.begin();
  for (itr_first;itr_first != vec_1.end();itr_first++)
  {
    some += (*itr_first) * (*itr_second);
    cout<<some<<endl;
    itr_second++;
  }
}
