#ifndef _INVALIDENTRYEXCEPTION_H_
#define _INVALIDENTRYEXCEPTION_H_

class InvalidEntryException : public std::exception
{
public:
    InvalidEntryException() = default;
    ~InvalidEntryException() = default;
    virtual const char* what() const noexcept
            {
                return "Invalid Entry Exception";
            }
};

#endif // _INVALIDENTRYEXCEPTION_H_