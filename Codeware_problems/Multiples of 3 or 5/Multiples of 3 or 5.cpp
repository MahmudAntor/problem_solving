int solution(int number) {
		int i,sum=0;
    for(i=1; i<number; i++)
    {
      if(i%3 == 0 && i%5 == 0) 
      {
        sum += i;
        continue;
      }
      else if(i%3 == 0)
      {
        sum += i;
      }
      else if(i%5 == 0)
      {
        sum += i;
      }
    }
    return sum;
}