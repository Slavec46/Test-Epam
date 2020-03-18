#include <iostream>
#include <string>
#include <map>
#include <stack>
 
int main()
{
    std::string str("(([{}])){{}}");
    std::map<char, char> mp{ { '(', ')' }, { '[', ']' }, { '{', '}'} };
    std::stack<char> stk;
    int i = 0;
    for (i = 0; i < str.size(); ++i)
    {
        if ('(' == str[i] || '[' == str[i] || '{' == str[i])
        {
            stk.push(str[i]);
        }
        else if (!stk.empty())
        {
            char c = stk.top();
            stk.pop();
            if (mp[c] != str[i])
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    std::cout << (i == str.size() && stk.empty() ? "OK" : "FAIL") << std::endl;
}