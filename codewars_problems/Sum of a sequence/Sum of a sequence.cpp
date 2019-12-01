unsigned sequence_sum(unsigned start, unsigned end, unsigned step)
{
    unsigned sum = 0;
    int i;
    for(i=start; i<=end; i += step)
    {
      sum += i;
    }
    return sum;
}