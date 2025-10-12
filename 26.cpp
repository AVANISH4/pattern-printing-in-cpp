#include <iostream>
using namespace std; 

void printDiamondPattern(int n) {
    
    
    //  Top half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int s = 0; s < (n - i); s++) {
            cout << " ";
        }
        
        // Print asterisks separated by a space
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        
        // Move to the next line
        cout << endl;
    }

    // 2. Bottom half of the diamond 
    for (int i = n - 1; i >= 1; i--) {
        
        for (int s = 0; s < (n - i); s++) {
            cout << " ";
        }
        
    
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        
        // next line
        cout << endl;
    }
}

int main() {
   
    // n is nuumber of upper half structure
    int n ;
    cin>>n;
    
    cout << "--- Diamond Pattern for n = " << n << " ---" << endl;
    printDiamondPattern(n);
    
    return 0;
}