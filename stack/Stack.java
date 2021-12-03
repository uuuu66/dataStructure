
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Stack {

	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int howmany=Integer.parseInt(br.readLine());
		stack stack=new stack();
		StringBuilder sb=new StringBuilder();
		
	}
	public static class node{
		private node next=null;
		private int value=0;
		private node prev=null;
		public node(int value) {
			this.value=value;
		}
		public int getValue() {
			return this.value;
		}
		public node getNext() {
			return this.next;
		}
		public void setNext(node node) {
			this.next=node;
		}
		public node getPrev() {
			return this.prev;
		}
		public void setPrev(node node) {
			this.prev=node;
		}
	}
	public static class stack{
		private int size=0;
		private node lastNode;
		public stack() {
			lastNode=new node(0);
			
		}
		public node push(node node) {
			node.setPrev(lastNode);
			lastNode.setNext(node);
			lastNode=node;
			size+=1;
			return lastNode;
		}
		public int pop() {
			if(this.lastNode.getValue()!=0) {
				int value=lastNode.getValue();
				node prevNode=lastNode.getPrev();
				this.lastNode=prevNode;
				this.lastNode.setNext(null);
				size-=1;
				return value;
			}
			return -1;
			
		}
		public int empty() {
			if(size==0)
				return 1;
			return 0;
					
		}
		public int size() {
			return this.size;
		}
		public int top() {
			if(size==0)
				return -1;
			return this.lastNode.getValue();
		}
	}
}
