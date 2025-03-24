## 2. 🧑‍💻 Vector

```cpp
#include <vector>
std::vector<int> vec = {1, 2, 3, 4, 5};

Time Complexities:

Access: O(1)
Search: O(n)
Insertion: O(n) (amortized O(1) at the end)
Deletion: O(n)
Predefined Functions:

vec.push_back(value) – Add an element to the end.
vec.pop_back() – Remove the last element.
vec.size() – Return the number of elements.
vec.at(index) – Access element at index with bounds checking.
vec.front() – Access the first element.
vec.back() – Access the last element.

3. 🗂 Stack

#include <stack>
std::stack<int> stk;
stk.push(10);
stk.pop();
int topElement = stk.top();

Time Complexities:

Push: O(1)
Pop: O(1)
Top: O(1)
Predefined Functions:

stk.push(value) – Add element to stack.
stk.pop() – Remove top element.
stk.top() – Access the top element.
stk.empty() – Check if stack is empty.

4. 🚶‍♂️ Queue
#include <queue>
std::queue<int> q;
q.push(10);
q.pop();
int frontElement = q.front();

Time Complexities:

Push: O(1)
Pop: O(1)
Front: O(1)
Predefined Functions:

q.push(value) – Add element to the queue.
q.pop() – Remove front element.
q.front() – Access the front element.
q.back() – Access the back element.
q.empty() – Check if the queue is empty.

5. 🔁 Deque
#include <deque>
std::deque<int> dq;
dq.push_back(10);
dq.push_front(20);
dq.pop_back();
dq.pop_front();

Time Complexities:

Push/Pop (front/back): O(1)
Access: O(1)
Predefined Functions:

dq.push_back(value) – Add element to the end.
dq.push_front(value) – Add element to the front.
dq.pop_back() – Remove the last element.
dq.pop_front() – Remove the first element.
dq.front() – Access the first element.
dq.back() – Access the last element.

6. 🔗 Linked List (using std::list)

#include <list>
std::list<int> linkedList = {1, 2, 3, 4, 5};
linkedList.push_back(10);
linkedList.pop_front();

Time Complexities:

Access: O(n)
Search: O(n)
Insertion/Deletion: O(1) (if iterator is known)
Predefined Functions:

linkedList.push_back(value) – Add element to the end.
linkedList.push_front(value) – Add element to the front.
linkedList.pop_back() – Remove the last element.
linkedList.pop_front() – Remove the first element.
linkedList.size() – Return the number of elements.
linkedList.front() – Access the first element.
linkedList.back() – Access the last element.

7. 🏆 Priority Queue (Max-Heap by default)
#include <queue>
std::priority_queue<int> maxHeap;
maxHeap.push(10);
maxHeap.pop();
int maxElement = maxHeap.top();

Time Complexities:

Push: O(log n)
Pop: O(log n)
Top: O(1)
Predefined Functions:

maxHeap.push(value) – Add element to the heap.
maxHeap.pop() – Remove the top element.
maxHeap.top() – Access the top element.
maxHeap.empty() – Check if the heap is empty.

8. 🏅 Priority Queue (Min-Heap)
#include <queue>
std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
minHeap.push(10);
minHeap.pop();
int minElement = minHeap.top();

Time Complexities:

Push: O(log n)
Pop: O(log n)
Top: O(1)
Predefined Functions:

minHeap.push(value) – Add element to the heap.
minHeap.pop() – Remove the top element.
minHeap.top() – Access the top element.
minHeap.empty() – Check if the heap is empty.

9. 🔢 Set
#include <set>
std::set<int> s;
s.insert(10);
s.erase(10);
bool exists = s.count(10);

Time Complexities:

Search: O(log n)
Insertion: O(log n)
Deletion: O(log n)
Predefined Functions:

s.insert(value) – Add element to the set.
s.erase(value) – Remove element.
s.count(value) – Check if the element exists.
s.find(value) – Find element (returns iterator).
s.empty() – Check if the set is empty.
s.size() – Return the number of elements.

10. 🗺 Map
#include <map>
std::map<int, int> mp;
mp[1] = 10;
mp.erase(1);
int value = mp[1];

Time Complexities:

Search: O(log n)
Insertion: O(log n)
Deletion: O(log n)
Predefined Functions:

mp[key] = value – Insert or update a key-value pair.
mp.erase(key) – Remove a key-value pair.
mp.find(key) – Find the element by key (returns iterator).
mp.count(key) – Check if the key exists.
mp.size() – Return the number of elements.
mp.empty() – Check if the map is empty.

11. 🔍 Unordered Set
#include <unordered_set>
std::unordered_set<int> us;
us.insert(10);
us.erase(10);
bool existsUnordered = us.count(10);

Time Complexities:

Search: O(1) (average)
Insertion: O(1) (average)
Deletion: O(1) (average)
Predefined Functions:

us.insert(value) – Add element to the set.
us.erase(value) – Remove element.
us.count(value) – Check if the element exists.
us.find(value) – Find element (returns iterator).
us.empty() – Check if the set is empty.
us.size() – Return the number of elements.

12. 🧑‍💻 Unordered Map
#include <unordered_map>
std::unordered_map<int, int> ump;
ump[1] = 10;
ump.erase(1);
int unorderedValue = ump[1];

Time Complexities:

Search: O(1) (average)
Insertion: O(1) (average)
Deletion: O(1) (average)
Predefined Functions:

ump[key] = value – Insert or update a key-value pair.
ump.erase(key) – Remove a key-value pair.
ump.find(key) – Find element by key (returns iterator).
ump.count(key) – Check if the key exists.
ump.size() – Return the number of elements.
ump.empty() – Check if the map is empty.