#include<iostream>
#include<thread>
#include<chrono>
#include<windows.h>
    void print(int a){
        for(int i=0;i<a;i++){
             std::cout<<"ID:\t"<<std::this_thread::get_id();
            std::cout<<"\t"<<i<<"\n";
            //std::this_thread::sleep_for('2000ms');
            Sleep(1000);}
    }

 int main()
 {
        std::thread t1(print,6);
        std::thread::id t=t1.get_id();
        std::thread t2(print,4);
        std::thread::id ty=t2.get_id();
        std::cout<<"id:"<<t<<"\n";
        std::cout<<"id:"<<ty<<"\n";
        t1.join();
        t2.join();


 }
