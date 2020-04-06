#ifndef _ILLEGALBALANCEEXCEPTION_H_
#define _ILLEGALBALANCEEXCEPTION_H_

class IllegalBalanceException : public std::exception
{
public:
    IllegalBalanceException() = default;
    ~IllegalBalanceException() = default;
    virtual const char* what() const noexcept
            {
                return "Illegal Balance Exception";
            }
};

#endif // _ILLEGALBALANCEEXCEPTION_H_