#include <iostream>

int main ()
{

  // 1.9
  int sum = 0, current_val = 50;
  while (current_val <= 100) {
    sum += current_val;
    ++ current_val;
  }
  std::cout << "The sum of 50 to 100 is " << sum << std::endl;
  
  // 1.10
  sum = 0, current_val = 10;
  while (current_val >= 0) {
    sum += current_val;
    -- current_val;
  }
  std::cout << "The sum of 10 to 0 is " << sum << std::endl;
  
  // 1.11
  int r1 = 0, r2 = 0;
  std::cout << "Supply two numbers to be print their range: " << std::endl;
  std::cin >> r1 >> r2;
  if (r1 > r2) {
    std::cout << "The numbers between " << r1 << " and " << r2 << " are: \n" << std::endl;
    while (r2 != r1-1) {
        --r1;
        std::cout << r1 << "\n" << std::endl;
      }
  }
  else if (r1 < r2) {
    std::cout << "The numbers between " << r1 << " and " << r2 << " are: \n" << std::endl;  
    while (r2-1 != r1) {
      ++r1;
      std::cout << r1 << "\n" << std::endl;
    }
  }
  else {
    std::cout << "There are no values in the range specified.\n" << std::endl;
  }
  
  return 0;
  
}
