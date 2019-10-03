#include<algorithm>
#include<vector>
#include<set>
#include<iostream>
#include<numeric>//for the accumulate operation(take the sum of the value)
using namespace std;
int main()
{
    vector<int> vi= {7,6,4,3,67,12,89};
    vector<int> si= {23,56,89,122,90,34};
    
    vector<int> :: iterator it;

    for(it=vi.begin();it!=vi.end();++it)
    {
        cout<<(*it)<<"  ";
    }
    cout<<"\n";
    sort(vi.begin(),vi.end());
    
    stable_sort(vi.begin(),vi.end());
    cout<<"\n";
    for(it=vi.begin();it!=vi.end();++it)
    {
        cout<<(*it)<<"  ";
    }
    cout<<"\n";

    sort(vi.begin(),vi.end(),greater<int>());
    cout<<"\n";
    for(it=vi.begin();it!=vi.end();++it)
    {
        cout<<(*it)<<"  ";
    }
    cout<<"\n";

   int n;
   if(cin>>n)
   {
    cout<<"OKK"<<"\n";
   }
   else{
    cout<<"NOT OKK"<<"\n";
    }
 
   auto iit=std::max_element(vi.begin(),vi.end());

   cout<<"\n\n";
   cout<<*iit<<"\n";
   
   reverse(si.begin(),si.end());
   cout<<"\n\n";
   for(it=si.begin();it!=si.end();++it)
   {
     cout<<(*it)<<" ";
   } 
   cout<<"\n\n";
   int sum=accumulate(si.begin(),si.end(),0);  
   cout<<sum<<"\n";
   
   auto iiit=std::min_element(vi.begin(),vi.end());
   cout<<"\n\n";
   cout<<(*iiit)<<"\n"; 

   //count(first iterator,last iterator,element)
    
   //find(first iterator,last iteratot ,element)
   //find function returns the iterator to the last element when 
   //it doesnot find the last element
    vector<int> new_vector={11,11,33,11,56,78,22,90};
    int count_of_element=count(new_vector.begin(),new_vector.end(),11);
    cout<<"\n\n";
    cout<<"count of 11 is"<<count_of_element<<"\n";

    auto iiiit=find(new_vector.begin(),new_vector.end(),110);
    if(iiiit == new_vector.end())
   {
      cout<<"the element is not there in the "<<"\n";
   }
    else{
    cout<<"the element is there in the in the vector"<<"\n";
     }   
    
   stable_sort(new_vector.begin(),new_vector.end());
   
   bool value=binary_search(new_vector.begin(),new_vector.end(),56);
   
   cout<<"\n\n";
   
   cout<<value<<"\n";

   vector<int> for_the_lower_bound={1,23,4,455,6,7,78,8,9,86,33};
   auto iiiiit =lower_bound(new_vector.begin(),new_vector.end(),77);
   cout<<(iiiiit-new_vector.begin())<<"\n";
   
   next_permutation(new_vector.begin(),new_vector.end());
   cout<<"\n\n";
  for(it=new_vector.begin();it!=new_vector.end();++it)
   {
     cout<<(*it)<<" ";
   }


  prev_permutation(new_vector.begin(),new_vector.end());
  cout<<"\n\n";
  for(it=new_vector.begin();it!=new_vector.end();++it)
   {
     cout<<(*it)<<" ";
   }
  //  for_each(v.begin(), v.end(), [] (int i) { cout << i << " "; });
  //printing can be done in this way also
   return 0; 
}
