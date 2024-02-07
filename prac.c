// #include <stdio.h>

// // Sample cricket function
// int cricket(int game[], int begin, int end) {
//     int max_value = game[begin];
//     for (int i = begin + 1; i <= end; ++i) {
//         if (game[i] > max_value) {
//             max_value = game[i];
//         }
//     }
//     return max_value;
// }

// // Hockey function to find the maximum value within a range
// int hockey(int game[], int begin, int end) {
//     if (begin == end) {
//         return game[begin];
//     } 
//     int mid = (begin + end) / 2; // Corrected calculation
//     int x = cricket(game, begin, end);
//     int y = 0;
//     if (x > y) {
//         return x;
//     } else {
//         return y;
//     }
// }

// int main() {
//     // Sample game array
//     int game[] = {3, 8, 5, 2, 9};

//     // Test the hockey function
//     int max_value = hockey(game, 0, 4);
//     printf("Maximum value in the game array: %d\n", max_value);

//     return 0;
// }
#include <stdio.h>
#include <limits.h> // for INT_MAX

int Mystery(int a[], int size, int m) {
    if (size >= 0) {
        if (a[size] < m ) {
            m = a[size];
        }
        size--;
        return Mystery(a, size, m);
    } else {
        // Return INT_MAX if no element is less than m
        return ( m);
    }
}
int Mystery1(int a[], int size, int m) {
    if (size >= 0) {
        if (a[size] > m ) {
            m = a[size];
        }
        size--;
        return Mystery1(a, size, m);
    } else {
        // Return INT_MAX if no element is less than m
        return ( m);
    }
}
int main() {
    int a[] = {5, 8, 3, 2, 9, 6};
    int size = sizeof(a) / sizeof(a[0]);
    int m = INT_MAX; 
    int m1= INT_MIN;// Initial value for m
    int min_less_than_m = Mystery(a, size - 1, m);
    int max_ = Mystery1(a, size - 1, m1);
    if (min_less_than_m != -1) {
        printf("The minimum value less than m is: %d\n and max = %d", min_less_than_m,max_);
    } else {
        printf("There is no value less than m in the array.\n");
    }
    return 0;
}

