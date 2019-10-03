//it is just the structure that c uses 
//kind of hint that you can use just run with some input and see the result
//see how we can take input for structure members and and how we can access that
//simple differenec in class and struct is that by default members in class is private and in struct si public.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct Student
{
    unsigned age{};//this braces is used in the c++11 features to ensure that we have an initialised structure
    //when we instantiate the problem
    string first_name{};
    string last_name{};
    unsigned standard{};
};
int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
