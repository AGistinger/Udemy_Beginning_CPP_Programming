// I/O and Streams / Stream Manipulators - Boolean

#include  <iostream>
#include <iomanip>

int main()
{
	
    std::cout << "noboolalpha - default (10 == 10) : " << (10 == 10) << std::endl;
    std::cout << "noboolalpha - default (10 == 20) : " << (10 == 20) << std::endl;
    
    //Set to true/fasle formatting
    std::cout << std::boolalpha;
    std::cout << "boolalpha (10 == 10) : " << (10 == 10) << std::endl;
    std::cout << "boolalpha (10 == 20) : " << (10 == 20) << std::endl;
    
    //Setting still stays for future boolean insertions
    std::cout << "boolalpha (10 == 10) : " << (10 == 10) << std::endl;
    std::cout << "boolalpha (10 == 20) : " << (10 == 20) << std::endl;
    
    //Toggle to 0/1
    std::cout << std::noboolalpha;
    std::cout << "noboolalpha (10 == 10) : " <<  (10 == 10) << std::endl;
    std::cout << "noboolalpha (10 == 20) : " << (10 == 20) << std::endl;
    
    //Set back to true/false using setf method
    std::cout.setf(std::ios::boolalpha);
    std::cout << "boolalpha (10 == 10) : " << (10 == 10) << std::endl;
    std::cout << "boolalpha (10 == 20) : " << (10 == 20) << std::endl;
    
    //Reset to default 1/0
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << "default (10 == 10) : " << (10 == 10) << std::endl;
    std::cout << "default (10 == 20) : " << (10 == 20) << std::endl;
    
	return 0;
}
