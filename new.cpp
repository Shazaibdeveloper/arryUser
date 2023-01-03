#include <iostream>
using namespace std;

int main()
{
  int sum = 0, i, max;
  int arr[i] = {};

  cout << "Enter Total numbers you want the sum of : ";
  cin >> max;
  for (i = 1; i <= max; i++)
  {
    cout << "Enter arry number" << i << " : ";
    cin >> arr[i];

    sum = sum + arr[i];
    // 1
  }

  cout << "The sum is : " << sum << endl;
}
