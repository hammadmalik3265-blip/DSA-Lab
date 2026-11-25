#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos;
    
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
    
    cout << "\n\nEnter position to delete (1 to " << n << "): ";
    cin >> pos;
    
    // Shifting elements
    for(int i = pos-1; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    
    cout << "\nUpdated Array after Deletion: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
