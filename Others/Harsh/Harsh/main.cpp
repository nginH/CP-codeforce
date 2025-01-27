#include <iostream>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

#define H_A code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)

#define inout freopen("/Users/harshanand/Desktop/C++ file/Harsh/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/C++ file/Harsh/output.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define br cout<< "\n" //yey html

class Queue {
public:
     int front, rear, size;
     unsigned capacity;
     int* array;
};

Queue* createQueue(unsigned capacity)
{
     Queue* queue = new Queue();
     queue->capacity = capacity;
     queue->front = queue->size = 0;


     queue->rear = capacity - 1;
     queue->array = new int[queue->capacity];
     return queue;
}
int isFull(Queue* queue)
{
     return (queue->size == queue->capacity);
}
int isEmpty(Queue* queue)
{
     return (queue->size == 0);
}

void enqueue(Queue* queue, int item)
{
     if (isFull(queue))
          return;
     queue->rear = (queue->rear + 1)
     % queue->capacity;
     queue->array[queue->rear] = item;
     queue->size = queue->size + 1;
     cout << item << " enqueued to queue\n";
}

int dequeue(Queue* queue)
{
     if (isEmpty(queue))
          return INT_MIN;
     int item = queue->array[queue->front];
     queue->front = (queue->front + 1)
     % queue->capacity;
     queue->size = queue->size - 1;
     return item;
}

     // Function to get front of queue
int front(Queue* queue)
{
     if (isEmpty(queue))
          return INT_MIN;
     return queue->array[queue->front];
}

     // Function to get rear of queue
int rear(Queue* queue)
{
     if (isEmpty(queue))
          return INT_MIN;
     return queue->array[queue->rear];
}

     // Driver code
int main()
{
     Queue* queue = createQueue(1000);

     enqueue(queue, 10);
     enqueue(queue, 20);
     enqueue(queue, 30);
     enqueue(queue, 40);

     cout << dequeue(queue)
     << " dequeued from queue\n";

     cout << "Front item is "
     << front(queue) << endl;
     cout << "Rear item is "
     << rear(queue) << endl;

     return 0;
}

     // This code is contributed by rathbhupendra
