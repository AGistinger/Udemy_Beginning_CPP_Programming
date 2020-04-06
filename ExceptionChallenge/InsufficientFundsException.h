#ifndef _INSUFFICIENTFUNDSEXCEPTION_H_
#define _INSUFFICIENTFUNDSEXCEPTION_H_

class InsufficientFundsException : public std::exception
{
public:
    InsufficientFundsException() = default;
    ~InsufficientFundsException() = default;
    virtual const char* what() const noexcept
            {
                return "Insufficient Funds Exception";
            }
};

#endif // _INSUFFICIENTFUNDSEXCEPTION_H_