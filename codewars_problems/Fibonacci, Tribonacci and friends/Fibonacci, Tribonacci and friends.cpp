std::vector<int> xbonacci(std::vector<int> signature, int n)
{
    
    int flag = 0;
    int next_element = 0, sum = 0, prev_sum = 0;
    int init_size = signature.size();
    if(n<=init_size)
    {
        signature.resize(n);
        return signature;
    }
    for(int i=0; i<init_size; i++)
    {
       sum += signature[i];
    }
    signature.push_back(sum);
    sum += sum;
    for(int i=init_size + 1; i<n; i++)
    {
        prev_sum += signature[flag];
      next_element = sum - prev_sum;
      flag++;
      sum += next_element;
      signature.push_back(next_element);
    }
    return signature;
}