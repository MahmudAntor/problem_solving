std::string get_middle(std::string input)
{
  std::string result;
  int n = input.size();
  if(n%2 != 0)
  {
    result = input[n/2];
    return result;
  }
  else
  {

    result = input[n/2 -1 ];
    result += input[n/2];
    return result;
  }
}