#ifndef KNN_H
#define KNN_H

#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
class KNN {
public:

    KNN() : (0){}

    KNN(int k) : k(k) {}

    //GET
    void getK() {
        return k;
    }

    virtual double similarityMeasure(const T& a, const T& b) const = 0;

    std::vector<int> findNearestNeighbors(const std::vector<T>& trainData, const T& target) const {
        std::vector<int> neighbors;

        std::vector<std::pair<double, int>> similarities;  
        for (int i = 0; i < trainData.size(); ++i) {
            double similarity = similarityMeasure(trainData[i], target);
            similarities.push_back(std::make_pair(similarity, i));
        }

        std::sort(similarities.rbegin(), similarities.rend());

        for (int i = 0; i < k; ++i) {
            neighbors.push_back(similarities[i].second);
        }

        return neighbors;
    }
    
private:
    int k;

    
};

#endif
