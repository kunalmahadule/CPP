// list

#include <iostream>
#include <list>
using namespace std;
void display(list<int> lis)
{
    list<int>::iterator it;
    for (it = lis.begin(); it != lis.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    list<int> list1;
    list1.push_back(76);
    list1.push_back(6);
    list1.push_back(4);
    list1.push_back(21);

    display(list1);
    // list1.pop_front();
    // list1.remove(21); //removing content from middle
    // list1.remove(6);
    cout << endl;
    display(list1);
    // display(list1);

    // cout << endl;
    // // Ways to sort,reverse,merging
    // list1.sort();
    // display(list1);

    // cout << endl;
    // list1.reverse();
    // display(list1);

    //     list<int> list2(4);
    //     list<int>::iterator iter;
    //     iter = list2.begin();
    //     *iter = 3;
    //     iter++;
    //     *iter = 34;
    //     iter++;
    //     *iter = 90;
    //     iter++;
    //     *iter = 2;
    //     iter++;
    //     display(list2);
    //     cout << endl;
    //     list1.sort();
    //     list2.sort();
    //     list1.merge(list2);
    //     cout << "After merging list: ";
    //     display(list1);
    return 0;
}