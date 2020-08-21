#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node * next;
		Node(int data){
			this->data = data;
			this->next = NULL;
		}	
};
class LinkedList{
	public:
		Node * head;
		LinkedList(){
			head = NULL;
		}
		void insertAtTheStart(int data){
			Node * newNode = new Node(data);
			if(head == NULL){
				head = newNode;
				return;
			}
			else{
				newNode->next = head;
				head = newNode;
			}
		}
		void insertAtTheEnd(int data){
			Node * newNode = new Node(data);
			if(head == NULL)
				head = newNode;
			else{
				Node * cur = head;
				while(cur->next != NULL){
					cur = cur->next;
				}
				cur->next = newNode;	
			}
		}
		void insert(int data, int position){
			Node * newNode = new Node(data);
			if(head == NULL || position == 0){
				newNode->next = head;
				head = newNode;
				return;
			}
			Node * ptr = head;
			Node * qtr = head;
			int count = 0;
			while(ptr != NULL && count < position){
				count++;
				qtr = ptr;
				ptr = ptr->next;
			}
			newNode->next = ptr;
			qtr->next = newNode;
		}
		bool search(int data){
			Node * temp = head;
			while(temp != NULL){
				if(temp->data == data)
					return true;
				temp = temp->next;
			}
			return false;
		}
		void removeFromStart(){
			if(head == NULL)
				cout << "LinkedList is empty!";
			Node * newNode = head;
			head = head->next;
			delete newNode;
		}
		void removeLastElement(){
			if(head == NULL)
				cout << "LinkedList is empty!";
			if(head->next == NULL){
				delete head;
				cout << "LinkedList is empty after removing!";
			}
			Node * cur = head;
			while(cur->next->next != NULL){
				cur = cur->next;
			}
			delete cur->next;
			cur->next = NULL;
			//return head;
		}
		void remove(int key){
			if(head == NULL){
				cout << "LinkedList is empty!";
				return;	
			}
			if(head->data == key){
				Node *temp = head;
				head = head->next;
				delete temp;
				return;
			}
			Node * ptr = head;
			Node * qtr = head;
			while(ptr != NULL && ptr->data != key){
				qtr = ptr;
				ptr = ptr->next;
			}
			if(ptr == NULL){
				cout << "LinkedList is empty!";
				return;	
			}
			qtr->next = ptr->next;
			delete ptr;
			//return qtr;
		}
		void displayLinkedList(){
			if(head == NULL)
				cout << "LinkedList is empty!";
			Node * temp = head;
			while(temp != NULL){
				cout << temp->data << " ";
				temp = temp->next;	
			}
			cout << "\n";
		}
};

int main(){
	LinkedList ll;
	ll.insertAtTheStart(1);
	ll.insertAtTheEnd(10);
	ll.insertAtTheStart(2);
	ll.insertAtTheEnd(11);
	ll.displayLinkedList();
	ll.remove(2);
	ll.displayLinkedList();
	return 0;
}
