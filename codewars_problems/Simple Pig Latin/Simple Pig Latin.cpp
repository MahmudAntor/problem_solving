std::string pig_it(std::string str)
{
    std::string out;
    std::string cword;
    std::string temp;
    int flag = 1;
    for (char c : str)
    {
        if (c == ' ')
        {
            cword += temp;
            out += cword;
            out += c;
            cword = "";
            temp = "";
            flag = 1;
            continue;
        }
        if(flag == 1 && ((c>=65 && c<=90) || (c>=97 && c<=122)))
        {
            temp += c;
            temp += "ay";
            flag = 0;
            continue;
        }
        cword = cword + c;

    }
    cword += temp;
    out += cword;
    return out;
}