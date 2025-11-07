#include <iostream>
using namespace std;

class sample
{
private:
    int data;

public:
    sample(int data)
    {
        this->data = data;
    }

    ~sample()
    {
        cout << "distructor called for data ..." << data << endl;
    };

    void *operator new(size_t size)
    {
        cout << "Overloaded new operator called, size = " << size << " bytes" << endl;
        void *ptr = malloc(size);
        if (!ptr)
        {
            cout << "Size allocation failed ...\n";
        }
        return ptr;
    }

    void operator delete(void *ptr)
    {
        cout << "Overloaded delete operator called" << endl;
        free(ptr);
    }

    void display()
    {
        cout << "Data = " << data << endl;
    }
};

int main()
{

    sample *s = new sample(10);
    s->display();

    delete(s);

    return 0;
}