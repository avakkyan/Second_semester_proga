//// Created by Karina on 14.04.2023.//#include <iostream>using namespace std;template<class T, int N>T maximum_in_array(T arr[N]) {    T maxItem = arr[0];    for (int i = 1; i < N; ++i)        if (maxItem <= arr[i])            maxItem = arr[i];    return maxItem;}class FullStackException : public exception {public:    const char* what() const throw () {        return "Stack is full";    }};class EmptyStackException : public exception {public:    const char* what() const throw () {        return "Stack is empty";    }};