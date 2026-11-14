#include <bits/stdc++.h>
using namespace std;

void convertCase(string s)
{
  // for (int i = 0; i < s.length(); i++)
  // {
  //   if (s[i] >= 'a' && s[i] <= 'z')
  //   {
  //     s[i] = toupper(s[i]);
  //   }
  //   else if (s[i] >= 'A' && s[i] <= 'Z')
  //   {
  //     s[i] = tolower(s[i]);
  //   }
  // }

  for (int i = 0; i < s.length(); i++)
  {
    if (islower(s[i]))
    {
      s[i] = toupper(s[i]);
    }
    else if (isupper(s[i]))
    {
      s[i] = tolower(s[i]);
    }
  }

  cout << s << endl;
}

int main()
{
  string s;
  getline(cin, s);

  convertCase(s);

  string v = "123";
  int r = stoi(v);
  cout << r << endl;
  cout<<typeid(r).name()<<endl;

  // stoi() → String to integer.
  // to_string() → Integer to string.
  // stol() → String to long.
  // stoll() → String to long long.
  return 0;
}