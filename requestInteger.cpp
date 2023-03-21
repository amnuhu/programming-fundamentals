#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


double mean(vector<int> numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++)
        sum += numbers[i];
    return (double)sum/(double)numbers.size();
}

double median(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    int len = numbers.size();
    if (len == 0)
        return NULL;
    if (len % 2 != 0){
        return (double)numbers[len/2];}
    else {
        return (double)(numbers[(len-1)/2] + numbers[len/2])/2.0;
    }
}





int main() {

    int integer1;
    int integer2;
    int integer3;
    int integer4;
    int integer5;


    vector<int> numbers;

    for ( int i = 1; i < 6; ++i) {
        switch (i)
        {
        case 1:
            std::cout << "Enter first Integer: \n";
            std::cin >> integer1;
            numbers.push_back(integer1);
            break;
        case 2:
            std::cout << "Enter Second Integer: \n";
            std::cin >> integer2;
            numbers.push_back(integer2);
            break;
        case 3:
            std::cout << "Enter Third Integer: \n";
            std::cin >> integer3;
            numbers.push_back(integer3);
            break;
        case 4:
            std::cout << "Enter fourth Integer: \n";
            std::cin >> integer4;
            numbers.push_back(integer4);
            break;
        case 5:
            std::cout << "Enter fifth Integer: \n";
            std::cin >> integer5;
            numbers.push_back(integer5);
            break;
        default:
            break;
        }
    }

    double meanValue =  mean(numbers);
    std::cout << "The mean value of the integers are " << meanValue << std::endl;

    double medianValue = median(numbers);
    std::cout << "The median value of the integers is " << medianValue << std::endl;
}