#include<string>
#include<vector>
#include <sstream>
using namespace std;

std::string range_extraction(std::vector<int> args)
{
    stringstream ss;
    string result;
    int flag=0, temp1=0, temp2=0;
    for(int i = 0; i < args.size(); ++i)
    {
        if(args[i+1]-args[i] == 1)
        {
            flag++;
            if(flag == 1)
                temp1 = args[i];
            if(flag >= 2)
                temp2 = args[i+1];
        }
        else
        {
            if(flag > 1)
            {
                ss << temp1<< '-'<< temp2<<',';
                result += ss.str();
                flag = 0;
                ss.str(std::string());

            }
            else if(flag == 1)
            {
                ss << temp1 << ',' <<args[i] << ',';
                result += ss.str();
                flag = 0;
                ss.str(std::string());
            }
            else
            {
                ss << args[i] << ',';
                result += ss.str();
                ss.str(std::string());
            }
        }

    }
    result.pop_back();
  return result;
}