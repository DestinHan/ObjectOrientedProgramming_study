#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>

void sequence_containers() {
    
    // vector
    {
        std::vector<int> vec;       // #include <vector>
        for (int i=0; i<10; ++i) {
            vec.push_back(i);
        }
        for (auto & e : vec) {
            std::cout << e << " ";
        }
        std::cout << std::endl;
    }
    
    // deque
    {
        std::deque<int> deq;
        for (int i=0; i<10; ++i) {
            deq.push_back(i);
            deq.push_front(i);      // include in front
        }
        
        for (auto & e : deq) {
            std::cout << e << " ";
        }
        std::cout << std::endl;
    }
}

void associative_containers() {
    
    // set
    {
        std::set<std::string> str_set;
        
        str_set.insert("Hello");
        str_set.insert("World");
        str_set.insert("Hello");        // ignores duplicate ones
        
        std::cout << str_set.size() << std::endl;       // 2
        
        for (auto & e : str_set) {
            std::cout << e << " ";
        }
        std::cout << std::endl;
    }
    
    // multiset : deuplication is allowed
    {
        std::multiset<std::string> str_set;
        
        str_set.insert("Hello");
        str_set.insert("World");
        str_set.insert("Hello");
        
        std::cout << str_set.size() << std::endl;
        
        for (auto & e : str_set) {
            std::cout << e << " ";
        }
        std::cout << std::endl;
    }
    
    // map : key/vallue
    {
        std::map<char, int> map;
        map['a'] = 10;
        map['b'] = 20;
        map['c'] = 30;
        
        std::cout << map['a'] << std::endl;
        
        map['a'] = 100;
        
        std::cout << map['a'] << std::endl;
        
        for (auto & e : map) {
            std::cout << e.first << " " << e.second << " ";
        }
        std::cout << std::endl;
    }
    
    // multimap : duplicated keys
    {
        std::multimap<char, int> map;
        map.insert(std::pair<char, int>('a', 10)); // Before c++ 14, pair<char, int>
        map.insert(std::pair('b', 10));
        map.insert(std::pair('c', 10));
        map.insert(std::pair('d', 100));
        
        std::cout << map.count('a') << std::endl;
        
        for (auto & e : map) {
            std::cout << e.first << " " << e.second << std::endl;
        }
        std::cout << std::endl;
    }
    
}

void container_adapters() {
    
    {
        std::cout << "Stack" << std::endl;
        
        std::stack<int> stack;
        stack.push(1);      // push adds a copy
        stack.emplace(2);   // emplace constructs a new object
        stack.emplace(3);
        std::cout << stack.top() << std::endl;  // 3
        stack.pop();
        std::cout << stack.top() << std::endl;  // 2
     }
    
    {
        std::cout << "Queue" << std::endl;
        
        std::queue<int> queue;
        queue.push(1);
        queue.push(2);
        queue.push(3);
        std::cout << queue.front() << " " << queue.back() << std::endl;
        queue.pop();        // erase 1 (the first one)
        std::cout << queue.front() << " " << queue.back() << std::endl;
    }
    
    
    
}

int main() {
    
    using namespace std;
    
    sequence_containers();
    
    associative_containers();
    
    container_adapters();
    
    return 0;
}
