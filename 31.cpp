#include <iostream> // Required for input/output operations (like std::cout and std::endl)
#include <algorithm> // Required for std::min (to find the minimum of multiple values)

int main() {
    // Define the maximum value in the pattern, which also determines its size.
    // For the given image, the maximum value is 4.
    int n = 4;

    // The total number of rows and columns in the square pattern will be (2 * n - 1).
    // For n = 4, this means a 7x7 grid.
    int total_rows_cols = (2 * n - 1);

    // Outer while loop for iterating through each row of the pattern.
    // 'row_idx' is 0-indexed, from 0 to total_rows_cols - 1.
    int row_idx = 0;
    while (row_idx < total_rows_cols) {
        // Inner while loop for iterating through each column in the current row.
        // 'col_idx' is 0-indexed, from 0 to total_rows_cols - 1.
        int col_idx = 0;
        while (col_idx < total_rows_cols) {
            // Calculate the distance from the top edge (0-indexed).
            int dist_from_top = row_idx;
            // Calculate the distance from the bottom edge (0-indexed).
            int dist_from_bottom = total_rows_cols - 1 - row_idx;
            // Calculate the distance from the left edge (0-indexed).
            int dist_from_left = col_idx;
            // Calculate the distance from the right edge (0-indexed).
            int dist_from_right = total_rows_cols - 1 - col_idx;

            // The value to print at the current cell is 'n' minus the minimum of these distances.
            // This effectively gives the "layer" number, where the center is layer 0 (value n-0=n)
            // and the outermost layer is layer (n-1) (value n-(n-1)=1).
            // No, the formula is: value = n - min(distances_from_edges).
            // Example:
            // For (0,0), min(0, 6, 0, 6) = 0. Value = 4 - 0 = 4.
            // For (1,1), min(1, 5, 1, 5) = 1. Value = 4 - 1 = 3.
            // For (3,3) (center), min(3, 3, 3, 3) = 3. Value = 4 - 3 = 1.
            int value_to_print = n - std::min({dist_from_top, dist_from_bottom, dist_from_left, dist_from_right});

            // Print the calculated value followed by a space.
            std::cout << value_to_print << " ";
            col_idx++; // Move to the next column
        }
        std::cout << std::endl; // Move to the next line after printing all characters for the current row
        row_idx++; // Move to the next row
    }

    return 0; // Indicate successful program execution
}
