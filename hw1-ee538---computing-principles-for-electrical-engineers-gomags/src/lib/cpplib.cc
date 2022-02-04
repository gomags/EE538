#include "cpplib.h"
#include "limits"
#include <iostream>

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// NOTE: write your own function declaration q2 here
double CPPLib::FindAverage(const std::vector<int> &v){
    double sum = 0;
    if (v.size() == 0) {
        return 0;
    }
    for (const auto i : v) {
        sum += i;
    }
    return sum/v.size();
}


// Question 5 Print your self-introduction
std::string CPPLib::PrintIntro() {
    // Please fill up this function.
    return "\nHello! I'm Gopi.\n"
            "\nReach me out at: gmaganti@usc.edu \n"
            "\n Major: Machine Learning & Data Science\n";
}

// Question 6
std::vector<int> CPPLib::Flatten3DVector(const std::vector< std::vector< std::vector<int> > > &input){
    // Please fill up this function.
    std::vector<int> res;
    for (const auto i : input)
        for (const auto j : i)
            for (const auto k :j ){
                res.push_back(k);
            }
    return res;
}

// Question 7 Climbing Stairs
int CPPLib::climbStairs(int n){
    // Please fill up this function.
    static int temp = 0;
    if(n == 0 && temp == 0)
    return 0;
    else if(n == 0 && temp != 0)
    return 1;
    else if (n == -1)
    return 0;
    else{
        temp++;
        return climbStairs(n-1) + climbStairs(n-2);
    }
}

