#include<string>
using namespace std;

class RGBToHex
{
    public:
        static string dec_to_hex(int dec)
        {
            string hex;
            int temp = dec;
            if(dec<=0) return "00";
            if(dec>255) return "FF";
            if(dec<10 && dec>0) hex.push_back('0');
            while(dec!=0)
            {
                int temp  = 0;
                temp = dec % 16;
                if(temp < 10)
                {
                    hex.push_back(temp + 48);
                }
                else
                {
                    hex.push_back(temp + 55);
                }
                dec = dec/16;
            }
            if(temp>9) reverse(hex.begin(), hex.end());
            return hex;
        }

        static std::string rgb(int r, int g, int b)
        {
            string result;
            result.append(RGBToHex::dec_to_hex(r));
            result.append(RGBToHex::dec_to_hex(g));
            result.append(RGBToHex::dec_to_hex(b));
            return result;
        }
    };