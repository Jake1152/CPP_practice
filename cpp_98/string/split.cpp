#include <iostream>
#include <string>
#include <vector>

const std::string whitespace = " \t\n\r\f\v";



int main()
{
    std::vector<std::string> str_vec;
    
    str_vec = ft_split("hello   world 4242    ", whitespace);
    for (std::vector<std::string>::iterator iter = str_vec.begin(); iter != str_vec.end(); iter++)
        std::cout << *iter << std::endl;
        // std::cout << "str_vec[iter] : " << str_vec[iter] << std::endl;

    // whitespace
    return (0);
}
// std::vector<std::string> split(const std::string line, const std::string delimiter)
// {
//     std::vector<std::string>    str_vec;
//     size_t  idx;
//     size_t  line_len;

//     idx = 0;
//     line_len = line.size();
//     while (idx < line_len)
//     {
//         line[idx]
//         idx++;
//     }

//     return str_vec;
// }
