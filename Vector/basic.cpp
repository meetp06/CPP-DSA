//
// Created by Meet Patel on 3/1/25.
//
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(12);
    v.push_back(14);
    v.push_back(17);
    // cout<<binary_search(v.begin(),v.end(),164);
    // cout << find(v.begin(), v.end(), 17) - v.begin();
    // for (auto i: v)
    // count,maximum,upperbound,lowerbound
    int count = count(v.begin(), v.end(), 12);
    cout << count;
    // #include <iostream>
    // #include <vector>
    // #include <algorithm> // For count, max_element, lower_bound, upper_bound
    //
    //     int main() {
    //         std::vector<int> vec = {1, 3, 5, 7, 7, 9, 11}; // Sorted vector for bounds
    //
    //         // Count occurrences of 7
    //         int count7 = std::count(vec.begin(), vec.end(), 7);
    //         std::cout << "Count of 7: " << count7 << std::endl;
    //
    //         // Find maximum element
    //         auto maxElement = *std::max_element(vec.begin(), vec.end());
    //         std::cout << "Maximum element: " << maxElement << std::endl;
    //
    //         // Lower bound of 7
    //         auto lb = std::lower_bound(vec.begin(), vec.end(), 7);
    //         std::cout << "Lower Bound of 7 is at index: " << (lb - vec.begin()) << std::endl;
    //
    //         // Upper bound of 7
    //         auto ub = std::upper_bound(vec.begin(), vec.end(), 7);
    //         std::cout << "Upper Bound of 7 is at index: " << (ub - vec.begin()) << std::endl;
    //
    //         return 0;
    //     }


    // {
    //     cout<<i<<" ";
    // }
    // cout << v.size() << " ";
    //
    // v.pop_back();
    // cout << v.size() << " ";
    // cout << v.capacity();
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << v[i] << " ";
    //
    // }
    // cout << "\n";
    //
    // v.pop_back();
    // v.clear();
    // v.erase(v.begin() + 2);
    // cout << v.size();
    // cout << v.capacity();
    // v.front();
    // v.back();
    // cout << v.empty(); // return 0 or 1
    // cout << v.at(2); // 2 means second element Ans:12
    // v.begin();
    // v.end();
    // v.rbegin();
    // v.rend();
    // for (auto itr = v.begin(); itr!= v.end();itr++) // check here itr and v[itr]
    // {
    // }
    // for (int i = 0; i < v.size(); i++) // [1,2,3,4,5, , ,] total 5 time loop run
    // {
    // }
    // for (int i = 0; i < v.capacity(); i++) // [1,2,3,4,5, , , ] total 8 time loop run
    // {
    // }
    // sort(v.begin(), v.end()); // 1,2,3,4
    // sort(v.begin(), v.end(), greater<int>()); // 4,3,2,1
}
