#include <iostream>

// This is a function int sum(int n).
int sum(int n) { 
  int s = 0;                // Set s to 0.
  for (int i=1; i<=n; i++)  // For i=1 up to including n,
    s += i;                 //   Let s = s + i.
  return s;                 // Finally return s.
}

// This is a function string reverse(string s).
std::string reverse(std::string s) {
  for (int i=0; i<s.size()/2; i++)     // For i=0 to n/2,
    std::swap(s[i], s[s.size()-i-1]);  //   Swap s[i] and s[n-i-1].
  return s;                            // Finally return s.
}

// This is the main function!
int main() {
  int n;                                 // This is an integer variable n! 
  n = 10000;                             // It's set to 10000.
  std::cout << sum(10000) << std::endl;  // Print sum(n).
}
