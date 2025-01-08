// include/data_structures/stack.hpp
#pragma once
#include <stdexcept>

namespace dsa {

template <typename T>
class Stack {
public:
    Stack(size_t capacity = 10) 
        : data_(new T[capacity])
        , size_(0)
        , capacity_(capacity) 
    {}
    
    ~Stack() {
        delete[] data_;
    }
    
    void push(const T& value) {
        if (size_ == capacity_) {
            resize(capacity_ * 2);
        }
        data_[size_++] = value;
    }
    
    T pop() {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty");
        }
        return data_[--size_];
    }
    
    const T& peek() const {
        if (isEmpty()) {
            throw std::runtime_error("Stack is empty");
        }
        return data_[size_ - 1];
    }
    
    bool isEmpty() const {
        return size_ == 0;
    }
    
    size_t size() const {
        return size_;
    }
    
private:
    T* data_;
    size_t size_;
    size_t capacity_;
    
    void resize(size_t new_capacity) {
        T* new_data = new T[new_capacity];
        for (size_t i = 0; i < size_; ++i) {
            new_data[i] = data_[i];
        }
        delete[] data_;
        data_ = new_data;
        capacity_ = new_capacity;
    }
};

} // namespace dsa