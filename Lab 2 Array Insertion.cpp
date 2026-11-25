#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, value;
    
    cout << "Enter size of array: ";
    cin >> n;
    
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "\nOriginal Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\n\nEnter position to insert (1 to " << n+1 << "): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;
    
    // Shifting elements
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = value;
    n++;
    
    cout << "\nUpdated Array after Insertion: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
