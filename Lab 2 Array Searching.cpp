#include <iostream>
using namespace std;

int main() {
    int arr[100], n, search, found = -1;
    
    cout << "Enter size of array: ";
    cin >> n;
    
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter element to search: ";
    cin >> search;
    
    // Linear Search
    for(int i = 0; i < n; i++) {
        if(arr[i] == search) {
            found = i;
            break;
        }
    }
    
    if(found != -1) {
        cout << "\nElement found at position: " << found + 1;
    } else {
        cout << "\nElement not found!";
    }
    
    return 0;
}
