//https://contest.yandex.ru/contest/27794/problems/B/

#include "funcs.h"
#include <bits/stdc++.h>

std::vector<long> getPrefixSums(const std::vector<int> & numbers){
    std::vector<long> ans(numbers.size()+1);
    ans[0] = 0;
    long sum = 0;
    for(int i=0;i<numbers.size();++i){
        sum+=numbers[i];
        ans[i+1] = sum;
    }
    return ans;
}

void parseFile(std::istream & input, std::ostream & output){

    int len;
    long targetSum;

    input >> len >> targetSum;

    std::vector<int> numbers(len);
    std::copy_n(std::istream_iterator<long int>(input),len,numbers.begin());

    auto prefixSums = getPrefixSums(numbers);
    numbers.clear();

    int count = 0;
    long curSum = 0;
    int jStart = 1;
    for(int i = 0; i < prefixSums.size(); ++i){
        for(int j = jStart; j < prefixSums.size(); ++j){
            curSum = prefixSums[j]-prefixSums[i];
            if(curSum == targetSum){
                ++count;
                jStart = j+1;
                break;
            }
            if(curSum>targetSum)
                break;
            jStart = j;
        }
    }

    output << count;
}
