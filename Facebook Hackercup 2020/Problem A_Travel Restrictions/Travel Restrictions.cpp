#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case, terminal, temp_l, temp_r;
    string inc_res, out_res;
    cin >> test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin>>terminal>>inc_res>>out_res;
        char *result = NULL;
        result = new char[terminal];
        cout<<"Case #"<<i<<":"<<endl;
        for(int j=0; j<terminal; j++)
        {
            fill_n(result, terminal, 'N');
            result[j] = 'Y';
            if(out_res[j] == 'Y')
            {
                if(j-1>=0 && inc_res[j-1]=='Y')
                {
                    result[j-1] = 'Y';
                    temp_l=j-1;
                    while(temp_l>=0 && out_res[temp_l]=='Y' && inc_res[temp_l-1]=='Y')
                    {
                        result[temp_l-1] = 'Y';
                        temp_l--;
                    }
                }
                if(j+1<=terminal && inc_res[j+1]=='Y')
                {
                    result[j+1] = 'Y';
                    temp_r =j+1;
                    while(temp_r<=terminal && out_res[temp_r]=='Y' && inc_res[temp_r+1]=='Y')
                    {
                        result[temp_r+1] = 'Y';
                        temp_r++;
                    }
                }
            }

            for(int k=0; k<terminal; k++)
              cout<<result[k];
            cout<<endl;
        }
        delete[] result;
    }
}
