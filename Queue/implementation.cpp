#include<iostream>
using namespace std;

class Queue{
	int *arr; 
	int size;
	int qfront;
	int rear;
	
	public:
		Queue(){
			size = 1001;
			arr = new int[size]; // dymanic declaration
			qfront = 0;
			rear = 0;
		} 
		
		bool isEmpty(){
			if(qfront == rear){
				return true;
			}
			else{
				return false;
			}
		}
		void enqueue(int data){
			// first check queue is full or not
			if(rear == size){
				cout<<"Queue is full bro!";
			}
			else{
				arr[rear] = data;
				rear++;
			}
		}
		int dequeue(){
			// check queue is empty first
			if(qfront == rear){
				return -1;
			}
			else{
				int ans = arr[qfront];
				arr[qfront] = -1;
				qfront++;
				
				if(qfront == rear){
					qfront = 0;
					rear = 0;
				}
				return ans;
			}
		}
		int front(){
			if(qfront == rear){
				return -1;
			}
			else{
				return arr[qfront];
			}
		}
	
};

int main(){
	Queue q;
	
	if(q.isEmpty()){
		cout<<"Queue is empty! "<<endl;
	}else{
		cout<<"Queue is not empty"<<endl;
	}
	
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7);
	q.enqueue(8);
	
	cout<<q.front()<<endl;
	
	if(q.isEmpty()){
		cout<<"Queue is empty! "<<endl;
	}else{
		cout<<"Queue is not empty"<<endl;
	}
	

	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	
	cout<<q.front()<<endl;
	
	return 0;
}
