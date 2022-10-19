#include<iostream>


using namespace std;

struct minimax{
    int min;
    int max;
};

minimax findminimax(int arr[],int n){
    struct minimax m1;
   
   if (n == 1)
    {
        m1.max = arr[0];
        m1.min = arr[0];    
        return m1;
    }
   
       if (arr[0] > arr[1])
    {
        m1.max = arr[0];
        m1.min = arr[1];
    }
    else
    {
        m1.max = arr[1];
        m1.min = arr[0];
    }
       for(int i = 2; i < n; i++)
    {
            if(arr[i]>m1.max){
                m1.max=arr[i];

            }
            else if (arr[i]<m1.min){
                m1.min=arr[i];
            }
        
    } return m1;
}

int main (){
    int arr[10]={1,2,3,4,5,6,7,8};
    int arr_size=8;
    
       
   struct minimax m1=findminimax(arr,arr_size);
    
    cout<<"maximum element-->"<<m1.max<<endl;
    cout<<"minimum element-->"<<m1.min<<endl;
}