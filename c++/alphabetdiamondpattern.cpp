#include <iostream>
using namespace std;

int main()
{
  int size;
  cout << "Enter The Number of alphabtes you want at edge of diamond : ";
  cin >> size;
  size = size + 1;
  int alpha = 65;
  int num = 0;
  // upside pyramid
  for (int i = 1; i <= size - 2; i++)
  {
    // printing spaces
    for (int j = size; j > i; j--)
    {
      cout << " ";
    }
    // printing alphabets
    for (int k = 0; k < i * 2 - 1; k++)
    {
      cout << ((char)(alpha + num++));
    }
    // set the number to 0
    num = 0;
    cout << "\n";
  }
  // downside pyramid
  for (int i = 1; i <= size - 1; i++)
  {
    // printing spaces
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // printing alphabets
    for (int k = (size - i) * 2 - 1; k > 0; k--)
    {
      cout << ((char)(alpha + num++));
    }
    // set num to 0
    num = 0;
    cout << "\n";
  }
  return 0;
}