#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test_case, str_len, cnt_a, cnt_b;
  string stone; 
  cin>>test_case;
  for(int i=1; i<=test_case; i++)
  {
      cin>>str_len>>stone;
      cnt_a = cnt_b = 0;
      cout<<"Case #"<<i<<": ";
      for(int j=0; j<str_len; j++)
      {
          if(stone[j] == 'A') cnt_a++;
          else cnt_b++;
      }
      if(cnt_a-cnt_b == 1 || cnt_b-cnt_a == 1) cout<<'Y'<<endl;
      else cout<<'N'<<endl;
  }
}