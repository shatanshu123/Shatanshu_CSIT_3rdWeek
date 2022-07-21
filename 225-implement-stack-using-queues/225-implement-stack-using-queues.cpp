//STRIVER_SDE_SHEET
class MyStack {
private:
  queue<int> q;

public:
  void push(int x) {
    q.push(x);
  }

  int pop() {
    int result = INT_MAX;
    queue<int> aux;
    while(!q.empty()) {
      result = q.front();
      if (q.size() == 1) {
        q.pop();
        break;
      }
      aux.push(result);
      q.pop();
    }

    while(!aux.empty()) {
      q.push(aux.front());
      aux.pop();
    }

    return result;
  }

  int top() {
    return q.back(); // Get the last element (C++ func)
  }

  bool empty() {
    return q.empty();
  }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */