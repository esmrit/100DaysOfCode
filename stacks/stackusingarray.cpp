#include<climits>

class stackusingarray{
    int *data;
    int nextindex;
    int capacity;

    public:
     stackusingarray()
     {
        data=new int[4];
        nextindex=0;
        capacity=4;
     }

     int size(){
        return nextindex;
     }   

     bool isempty(){
        return nextindex==0;
     }

     void push(int element){
        if (nextindex==capacity)
        {
            int * newdata=new int [2*capacity];
            for (int  i = 0; i < capacity; i++)
            {
                newdata[i]=data[i];
            }
            capacity*=2;
            delete []data;
            data=newdata;
        }
        
        data[nextindex]=element;
        nextindex++;
     }

     int pop(){
        if (isempty()){
            cout<<"stack is empty"<<endl;
            return INT_MIN;
        }
        nextindex--;

        return data[nextindex];

     }
     int top(){
         if (isempty()){
            cout<<"stack is empty"<<endl;
            return INT_MIN;
         }
        return data[nextindex-1];
     
     }
};
