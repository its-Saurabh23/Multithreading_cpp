#include<iostream>
#include<thread>
using namespace std;


void taskWithParameter(int start,int end){
    
    for(int i = start;i<end; i++){
        std::cout<<"Thread with parameter "<<i<<"\n";
    }
}

int main(){

    std::thread t(taskWithParameter, 1,5);
    t.join();
    return 0;
}