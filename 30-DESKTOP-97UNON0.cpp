#include <iostream> 
int main() {
  
    int n = 4; 

   
    int row = 1;
    while (row <= n) {
        
        int col = 1;
        while (col <= (2 * n - 1)) {
        
            int num_limit = n - row + 1;

            if (col <= num_limit) {
                std::cout << col << " ";
            } 
            
            else if (col > (2 * n - 1) - num_limit) {
                std::cout << (2 * n - 1) - col + 1 << " ";
            } 
          
            else {
                std::cout << "* ";
            }
            col++; 
        }
        std::cout << std::endl; 
        row++; 
    }
    return 0; 
}
