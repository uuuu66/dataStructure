class ArrayQueue{//class
  constructor(){
    this.queue=[]
    this.front=0;
    this.rear=0;
  }
  enqueue(value){
    this.rear+=1;
    this.queue[this.rear]=value;
  }
  dequeue(){
    const value= this.queue[this.front];
    delete this.queue[this.front];
    this.front +=1;
    return value;
  }
  peek(){
    return this.queue[this.front]
  }
  isEmpty(){
    return this.front===this.rear
  }
}
class Node{
  constuctor(value){
    this.value=value;
    this.next=null;
  }
}
class ListQueue{
  constructor(){
    this.head=null
    this.tail=null
    this.size=0;
  }
  enqueue(value){
    const newNode=new Node(value);
    if(this.head===null)
      this.head=newNode;
    else{
    this.tail.next=newNode;
    this.tail=newNode;
    }
    this.size+=1;
  }
  dequeue(){
    if(this.size===0)
      return -1;
    const value=this.head.value;
    const nextHead=this.head.next;
    this.head=nextHead;
    this.size-=1;
    return value;
  }
  peek(){
    return this.head.value
  }
  isEmpty(){
    return this.size===0
  }
}
