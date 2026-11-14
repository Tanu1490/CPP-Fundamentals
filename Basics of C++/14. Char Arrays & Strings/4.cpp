#include <bits/stdc++.h>
using namespace std;

void count(string str)
{
  int vowels = 0, cons = 0;

  for (int i = 0; i < str.length(); i++)
  {
    char ch = tolower(str[i]);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
      vowels++;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
      cons++;
    }
  }

  cout << "Vowels : " << vowels << ", Consonants : " << cons << endl;
}

void checkAnagram(string s1, string s2)
{
  if (s1.length() != s2.length())
  {
    cout << "Given Strings are not anagram.";
    return;
  }

  //   The tolower() function expects either:
  // - A value representable as unsigned char.
  // - Or EOF (a special value).
  // If s1[i] contains a negative value because char is signed, passing it directly can cause undefined behaviour.

  for (int i = 0; i < s1.length(); i++)
  {
    s1[i] = tolower((unsigned char)s1[i]);
    s2[i] = tolower((unsigned char)s2[i]);
  }
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  if (s1 == s2)
  {
    cout << "Given Strings are anagram.";
  }
  else
  {
    cout << "Given Strings are not anagram.";
  }
}

void AnangramByFreq(string s1, string s2)
{
  if (s1.length() != s2.length())
  {
    cout << "Given Strings are not anagram.";
    return;
  }

  for (int i = 0; i < s1.length(); i++)
  {
    s1[i] = tolower((unsigned char)s1[i]);
    s2[i] = tolower((unsigned char)s2[i]);
  }

  int freq[26] = {0};

  int charIndex;
  for (int i = 0; i < s1.length(); i++)
  {
    charIndex = s1[i] - 'a';
    freq[charIndex]++;
    cout << "Freq[" << s1[i] << "] : " << freq[charIndex] << endl;
  }

  for (int i = 0; i < s2.length(); i++)
  {
    charIndex = s2[i] - 'a';
    freq[charIndex]--;
    cout << "Freq[" << s2[i] << "] : " << freq[charIndex] << endl;
  }

  for (int i = 0; i < 26; i++)
  {
    if (freq[i] != 0)
    {
      cout << "Given Strings are not anagram." << endl;
      return;
    }
  }
  cout << "Given Strings are anagram." << endl;
}

int main()
{
  string s = "Banana";
  reverse(s.begin(), s.end());

  cout << s;

  string word = "raceca";
  string copy = word;

  reverse(word.begin(), word.end());

  (copy == word) ? (cout << "It is palindrome.") : (cout << "It is not palindrome.");

  string str = "dkjhopweuKEWJFJOfge wfiuhiuefERFHIWdnjoewjf";

  count(str);

  string s1 = "race";
  string s2 = "care";

  checkAnagram(s1, s2);
  AnangramByFreq(s1, s2);

  return 0;
}