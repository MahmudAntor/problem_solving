string reverse_words(string str)
{
    int n = str.length();
    if(str[n-1]==32) n--; //space in string end creates a bug of one extra space before the last word
    int pointer=0;
    for(int j = 0; j < n; j++)
    {
        if(str[j] == 32 || j == n-1)
        {
            if(j==n-1) j++;
            for (int i = pointer; i < pointer + ( (j-pointer)/2 ); i++)
            {
                swap(str[i], str[pointer + (j - i - 1)]);
            }
            pointer = j+1;

        }
    }
    return str;
}