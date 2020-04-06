//Lambdas
/*
 * A way to create a function without creating a function, treated more like a variable and less like a function.
 * [ capture clause ] (parameters) -> return-type { definition of method }
 * Lambdas have more power than an ordinary function by having access to variables from the enclosing scope. []
 * A lambda with an empty clause [] can access only those variables which are local to it.
 * [&] capture all external variable by reference
 * [=] capture all external variable by value
 * */

#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <algorithm>

using namespace std;

//Function Prototype
vector<int> generate_rand_vec(int num_of_nums, int min, int max);

int main()
{
	vector<int> vec_vals = generate_rand_vec(10, 1, 50);
    
    //Using a lambda expression to sort a vector
    sort(vec_vals.begin(), vec_vals.end(), 
        [](int x, int y) { return x < y; });
     
    //display vector
    for(const auto & val : vec_vals)
    {
        cout << val << " ";
    }
    cout << endl;
    
	return 0;
}

vector<int> generate_rand_vec(int num_of_nums, int min, int max)
{
    vector<int> vec_values;
    srand(time(NULL));
    int i = 0, rand_val = 0;
    
    while(i < num_of_nums)
    {
        rand_val = min + rand() % ((max + 1) - min);
        vec_values.push_back(rand_val);
        i++;
    }
    return vec_values;    
}