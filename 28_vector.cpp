#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Vector is just like Array
    // Fist include Vector
    // We uses STL -> standard template library for implementation
    // Use for Dynamic memory allocation
    // use Heap to store data
    // If vector is full then it creates double size vectore then add all elements in first vector and push_back new element we inserted inside it
    // If a[1] -> a.push_back(4) then -> a[1,4]
    // How to Inintialize?
    // vector<Datatype> vectorName(sizeofvector,initialize)
    // vector<int> v(sizeofvector,initialize)
    // vector<int>v(4) // size only
    // vector<int>v(4,2) // [2,2,2,2] just like
    // vector<int>v = {1,2,3,4,5};
    // we usase some builtin methods like sort ...

    // Input Elements in vector
    // vector<int> student(5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> student[i];
    // }

    // // Outpute
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << student[i];
    // }

    // // Inpute size of vector from user
    // int n;
    // cin>>n;
    // vector<int> vect(n);
    // Allowed but not allowed in array

    // // Remove values from vector
    // v.pop_back(); // O(1) timecomplexity
    // v.clear(); // Empty vector
    // v.erase(v.begin()+2); // Remove specific index element

    // // Size and Capacity
    // capacity = all Size of vector
    // size = how many elements in vector

    // // Front , Back , At , Empty
    // v=[1,2,3,4]
    // cout<<v.front(); //1
    // cout<<v.back();  //4
    // cout<<v.at();
    // cout<<v.empty(); // return 1 if vector is empty else return 0;

    // // Iterator in Vector
    // [1firstpointhere,2,3,4,endpointshere]
    // v.begin(); points to first index element
    // v.end(); points to next of last index element;
    // Reverse it
    // rend()[1,2,3,4rbegin]
    // v.rbegin(); points revers to begin
    // v.rend(); points revers to end

    // I
    // // auto use for detect automatic datatype
    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // II
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i];
    // }

    // // Sorting of Vector
    // v = [1,4,2,5,3,6];
    // Sort in increasing order
    // sort(v.begin(),v.end());
    // Sort in Decreasing order
    // sort(v.begin(),V.end, greater<int>())

    // // Create a Vector
    // vector<int> v;
    // // Size and Capacity
    // cout << "Size of V: " << v.size() << endl;
    // cout << "Capacity of V: " << v.capacity() << endl;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // cout << "Size of V: " << v.size() << endl;
    // cout << "Capacity of V: " << v.capacity() << endl;

    // // Update val
    // v[1] = 10;
    // cout << v[1] << endl;

    // // Eg 2
    // vector<int> v1(4, 1);
    // cout << "Size of V: " << v1.size() << endl;
    // cout << "Capacity of V: " << v1.capacity() << endl;
    // v1.push_back(10);
    // cout << "Size of V: " << v1.size() << endl;
    // cout << "Capacity of V: " << v1.capacity() << endl;

    // vector<int> v3 = {1, 2, 3, 4};
    // cout << v3.size();

    // // Delete Val from vector
    // vector<int> vnew;
    // vnew.push_back(1);
    // vnew.push_back(4);
    // vnew.push_back(2);
    // vnew.push_back(5);
    // vnew.push_back(6);
    // vnew.pop_back();
    // cout << "Size of Vnew: " << vnew.size() << endl;
    // cout << "Capacity of Vnew: " << vnew.capacity() << endl;
    // vnew.erase(vnew.begin() + 2);
    // cout << "Size of Vnew: " << vnew.size() << endl;
    // cout << "Capacity of Vnew: " << vnew.capacity() << endl;

    // // // Print Val
    // // for (auto i = 0; i < vnew.size(); i++)
    // // {
    // //     cout << vnew[i] << " ";
    // // }
    // // cout << endl;
    // // vnew.insert(vnew.begin() + 1, 50);
    // // vnew[1] = 31;

    // // Clear all elements
    // vnew.clear();
    // cout << "Size of Vnew: " << vnew.size() << endl;
    // cout << "Capacity of Vnew: " << vnew.capacity() << endl;

    // // Eg 3
    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(4);
    // // Print First
    // cout << arr[0] << endl;
    // cout << arr.front() << endl;
    // // Print Back
    // cout << arr.size() << endl;
    // cout << arr.back() << endl;

    // // Copy one vector to another vector
    // vector<int> a;
    // a = arr;
    // cout << a.size();

    // // // Interate
    // for (auto i : arr)
    //     cout << i << " ";
    // cout << endl;

    // // Eg 4
    vector<int> ans;
    ans.push_back(4);
    ans.push_back(3);
    ans.push_back(5);
    ans.push_back(2);
    // Sort in Increasing order
    // sort(ans.begin(), ans.end());
    // sort(ans.begin(), ans.end(), greater<int>());
    // sort(ans.rbegin(), ans.rend());
    // // Search in Binary search
    // cout << binary_search(ans.begin(), ans.end(), 3);
    // // Find index of element
    // cout << find(ans.begin(), ans.end(), 3) - ans.begin();

    return 0;
}