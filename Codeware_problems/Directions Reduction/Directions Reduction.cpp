class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr)
    {
        std::stack<std::string>dr;
        std::vector<std::string>result;
        dr.push("dummy");
        int i, cont_size = arr.size();
        for(i=0; i<cont_size; i++)
        {
            if(dr.top() == "EAST" && arr[i] == "WEST")
            {
                dr.pop();
            }
            else if(dr.top() == "WEST" && arr[i] == "EAST")
            {
                dr.pop();
            }
            else if(dr.top() == "NORTH" && arr[i] == "SOUTH")
            {

                dr.pop();
            }
            else if(dr.top() == "SOUTH" && arr[i] == "NORTH")
            {
                dr.pop();
            }
            else dr.push(arr[i]);
        }
        cont_size = dr.size();

        while(cont_size != 1)
        {
            result.push_back(dr.top());
            dr.pop();
            cont_size--;
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};