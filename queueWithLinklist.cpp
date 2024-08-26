#include <iostream>
#include <forward_list>

using namespace std;

template<typename T>
class Queue;

template<typename T>    
    void show(Queue<T>& q);

template<typename T>
class Queue
{
    forward_list<T> _queue;

    public:
  
    Queue(){}
    virtual ~Queue(){}

    T pop()
    {
        T data;
        if(!_queue.empty())
        {
            data = _queue.front();
            _queue.pop_front();
        }

        return data;
    }

    void push(T value)
    {
        if(_queue.empty())
        {
            _queue.push_front(value);
        }
        else
        {
            auto it = _queue.begin();
            int queue_size = size()-1;
            
            while(queue_size--)
            {
                if(it != _queue.end())
                    it++;
            }
            _queue.insert_after(it,value);
        }
    }

    T front()
    {
        return _queue.front();
    }

    bool empty()
    {
        return _queue.empty();
    }
    
    int size()
    {
        int size = 0;
        for(auto &i : _queue)
            size++;

        return size;
    }
   
    friend void show<T>(Queue<T>& queue);
};

template<typename T>    
    void show(Queue<T>& q)
    {
        cout << "Queue is : ";
        for(auto &i : q._queue)
            cout << i << " ";
        cout << endl;
    }

class RandomClass
{
    string _data;

    public:
    
    RandomClass() = default;
    RandomClass(string data):_data(data){}

    friend ostream& operator<<(ostream &os,RandomClass& rc)
    {
        os << rc._data;
        return os;
    }

};

int main()
{
    Queue<int> q1;
    q1.push(10);
    show(q1);
    q1.push(20);
    show(q1);
    q1.push(30);
    show(q1);
    q1.push(40);
    show(q1);
    q1.push(50);
    show(q1);
    q1.pop();
    show(q1);
    q1.pop();
    show(q1);

    RandomClass rc1("Some");
    RandomClass rc2("Random");
    RandomClass rc3("Class");

    Queue<RandomClass> q2;
    q2.push(rc1);
    q2.push(rc2);
    q2.push(rc3);
    show(q2);
    q2.pop();
    show(q2);

    
    return 0;
}
