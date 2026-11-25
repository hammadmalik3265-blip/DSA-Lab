#include <iostream>
using namespace std;

int main() {
    int arr[6];
    
    cout << "Enter 6 elements: ";
    for(int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    
    cout << "\nYour Array is: ";
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
