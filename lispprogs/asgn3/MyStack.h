class MyStack
{
    int size;
    int *a;
    int top;
public:
    void Push(const int &);
    void Pop(int &);
    int GetMaxSize();
    int CurrentSize();
    void Display();
    int isEmpty();
    MyStack();
    MyStack(const int &);
};
