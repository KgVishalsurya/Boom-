#include <iostream>
using namespace std;

int main() {

  int a[3][3] = {{23, 3, 2}, {2, 33, 4}, {2, 4, 23}};

  // Loop through each row of the array
  for (int i =0 ; i<3 ; i++) {

    // Loop through each element in the row
    for (int j = 0 ; j<3 ; j++) {
      cout << a[i][j] << " "; // Print the element with a space
    }

    cout << endl; // Move to the next line after each row
  }

  return 0;
}

