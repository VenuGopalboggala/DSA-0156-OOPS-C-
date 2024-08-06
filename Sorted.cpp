#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int a[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n); 
    
    cout << "The Sorted Array:";
    for(int i = 0; i < n; i++) { 
        cout << " " << a[i];		
    }
    cout << endl; 
    
    return 0;
}

