#include<iostream>
#include<thread>    // this will help to create thread and manage 

void task(){
    std::cout<<"Task"<<"\n";
}

int main(){
    std::thread t(task); // creating thread
    t.join();  
    
    std::cout<<"Mian thread "<<"\n";
    return 0;
}

//For time we use #include<chrono>

