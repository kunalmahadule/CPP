// vec4.front();
// vector ka first element denga
// vec4.back();
// vector ka last element denga

// *max_vector(vec4.begin().vec4. end())
// Max element return karanga vector ka

// *min_vector(vec4.begin().vec4. end())
// Min element return karanga vector ka
// vec4.resize(4);
// merging,sorting,reversing,remove


#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this array" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; //--->
        // cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element, size = 5;
    // cout << "Enter the size of the array you should be creat:  ";
    // cin >> size;
    for (int i = 1; i <= size; i++)
    {
        cout << "Enter the " << i << "st element you want to store in the array: ";
        cin >> element;
        vec1.push_back(element); //--->
    }
    // // vec1.pop_back();//--->
    // // vec1.pop_back();//--->
    display(vec1);
    cout << vec1.size() << endl;
    vec1.resize(3);
    cout << endl;
    cout << vec1.front() << endl;
    cout << vec1.back() << endl;
    cout << vec1.size() << endl;
    // cout << endl;

    // // Insert
    // vector<int>::iterator iter = vec1.begin();//--->
    // vec1.insert(iter +3, 2, 786);
    // display(vec1);

    // ways to creat vector
    // vector<int> vec1; // zero length vector
    // vector<char> vec2(4);// 4-element charactor vector
    // vec2.push_back('K');
    // display(vec2);
    // vector<char> vec3(vec2); // 4-element charactor vector made from vec2
    // display(vec3);
    // vector<int> vec4(3, 5); // 5 ko 4 times print karanga
    // display(vec4);
    return 0;
}