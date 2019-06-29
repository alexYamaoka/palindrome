#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(const string str);
  // function to test if string is a palindrome
  // postCondition: returns true if string is a palindrome, false otherwise

int main()
{
  string str;
  bool isTrue = false;


  cout << "Enter string to determine if palindrome: ";
  cin >> str;

  isTrue = isPalindrome(str);

  if (isTrue)
  {
    cout << "Yes this is a palindrome" << endl;
  }
  else
  {
    cout << "No this is not a palindrome" << endl;
  }

  return 0;
}

bool isPalindrome(const string str)
{
  int length = str.length();


  for(int i = 0; i < length/2; i++)
  {
    if (toupper(str[i]) == toupper(str[length-1-i]))
    {
      return true;
    }
    else
    {
      return false;
    }
  }

}
