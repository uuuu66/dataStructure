class MaxHeap{
    constructor(){
        this.heap=[Infinity]
        
    }
    add(value){
        this.heap.push(value);
        let currentIndex=this.heap.length-1;
        let parentIndex=Math.floor(currentIndex/2);
        while(this.heap[parentIndex]<value){
                    const temp=this.heap[parentIndex]
                    this.heap[parentIndex]=value;
                    this.heap[currentIndex]=temp
                    currentIndex=parentIndex;
                    parentIndex=Math.floor(currentIndex/2);
        }
    }
    remove(){
       const max=this.heap[1];
        if(this.heap.length===2){
            this.heap.pop();
            return max;
        }
        this.heap[1]=this.heap.pop();
        let currentIndex=1;
        let leftIndex=2;
        let rightIndex=3;
        while(this.heap[currentIndex]<this.heap[leftIndex]||this.heap[currentIndex]<this.heap[rightIndex]){
         
            const temp=this.heap[currentIndex];
        
            if(this.heap[leftIndex]<this.heap[rightIndex]){
                this.heap[currentIndex]=this.heap[rightIndex];
                this.heap[rightIndex]=temp;
                currentIndex=rightIndex;
            }else{
                this.heap[currentIndex]=this.heap[leftIndex];
                this.heap[leftIndex]=temp;
                currentIndex=leftIndex;
            }
            leftIndex=currentIndex*2;
            rightIndex=currentIndex*2 +1;
            
        }
     return max;
    }
    getHeap(){
        return this.heap;
    }
    
}
