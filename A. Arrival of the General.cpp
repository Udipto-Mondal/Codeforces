///***************************  00  *************************////
/*                           01    01
                            1010101010
                           010101010101
                        110101010101010101
                           0          0
                          0   ^    ^   0
                          0     **     0
                           0          0
                            0        0
                        *1111000000001111*
                        010            010
                        010            010
                        010            010
                        010            010
                        010            010
*/
///*********************** W E L C O M E ***********************///
///***********************               **********************///
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n);
    
    for(int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    
    // Find the index of the tallest soldier
    int max_height_index = 0;
    for(int i = 1; i < n; i++) {
        if(heights[i] > heights[max_height_index]) {
            max_height_index = i;
        }
    }
    
    // Find the index of the shortest soldier
    int min_height_index = n - 1;
    for(int i = n - 2; i >= 0; i--) {
        if(heights[i] < heights[min_height_index]) {
            min_height_index = i;
        }
    }
    
    // Calculate the number of swaps needed
    int swaps = max_height_index + (n - 1 - min_height_index);
    
    // If the max_height_index is before min_height_index, reduce the number of swaps by 1
    if(max_height_index > min_height_index) {
        swaps--;
    }
    
    cout << swaps << endl;
    
    return 0;
}