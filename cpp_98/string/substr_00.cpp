#include <iostream>
#include <string>

int main()
{
    std::string a = "0123456        789    abcde fghij";
    const std::string delimiter = " \n\t\v\f\r";

	std::size_t found = 0;
    std::size_t prev_found = found;
    // std::size_t 
    std::cout << "a : " << a << std::endl;
	while (found != std::string::npos)
	{
		// line.find_first_of();
        
        // f
        std::cout << "found : " << found << std::endl;
        std::cout << "a.size() : " << a.size() << std::endl;
        // std::cout << "substr(found) : " << a.substr(found) << std::endl;
        // ;
        if (delimiter.find(a[prev_found]) != std::string::npos)
            std::cout << "a.substr(prev_found, found - prev_found) : " << a.substr(prev_found, found - prev_found) << std::endl;
            // continue;
		// substr(delimeter);
        prev_found = found;
		found = a.find_first_of(delimiter, found + 1);
	}

    // count가 npos이므로 pos부터 문자열까지 리턴한다.
    std::cout << "-1 a.size() : " << a.size() << std::endl;
    std::string sub1 = a.substr(10);
    std::cout << "-2 a.size() : " << a.size() << std::endl;
    std::cout << sub1 << '\n';

    // pos와 pos + count모두 문자열 범위 안이므로, 
    // 해당하는 부분 문자열을 리턴한다.
    std::string sub2 = a.substr(5, 3);
    std::cout << "-3 a.size() : " << a.size() << std::endl;
    std::cout << sub2 << '\n';

    // pos는 문자열 범위 안이지만, pos+count는 밖이므로, 
    // pos부터 문자열 끝까지 리턴한다.
    std::string sub4 = a.substr(a.size() - 3, 50);
    std::cout << "-4 a.size() : " << a.size() << std::endl;
    std::cout << sub4 << '\n';

    try
    {
        // pos가 문자열 범위 밖이므로 예외를 발생
        std::string sub5 = a.substr(a.size() + 3, 50);
        std::cout << sub5 << std::endl;
    }
    catch (const std::out_of_range& e)
    {
        std::cout << "pos exceeds string size\n" << std::endl;
    }
    return (0);
}