#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 7, 1, 9};
    

    nums.push_back(10); 
    nums.pop_back(); 
    
    sort(nums.begin(), nums.end()); 
    
    auto it = find(nums.begin(), nums.end(), 7); 
    if (it != nums.end()) {
        cout << "Element 7 found at position: " << distance(nums.begin(), it) << endl;
    }
    
    return 0;
}
