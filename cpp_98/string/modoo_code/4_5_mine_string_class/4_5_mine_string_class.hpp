#include <stddef>

class   MyString
{
private:
	char    *str;
	size_t  len;

public:
	MyString(void);
	MyString(char input_char);
	MyString(char *input_char_ptr);
	MyString();
	~MyString(void);

public:
	void		concat(char *input_str);
	size_t		size(void);
	MyString	find_string(MyString str_pattern);
	int			compare_string(MyString other_str);
	int			compare_lexically(MyString other_str);
};
