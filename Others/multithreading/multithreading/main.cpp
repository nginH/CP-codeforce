//
//  main.cpp
//  multithreading
//
//  Created by Harsh Anand on 27/09/2023.
//

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace chrono;

void sum(int x){
     std::this_thread::sleep_for(chrono::seconds(2));
     while (x--) {
          cout<<x<<"\n";
     }
}

void sum2(int x){
     std::this_thread::sleep_for(chrono::seconds(2));
     while (x--) {
          cout<<x<<"\n";
     }
}



int main(void) {
//     :high_resolution_clock::
#ifndef ONLINE_JUDGE
     auto start = std::chrono::high_resolution_clock::now();
#endif

     vector<int>v;

     
     std::thread t1(sum, 5);
     cout<<"hello world\n";


     std::thread t2(sum, 5);
     cout<<"hello world\n";
     t1.join();
     t2.join();

     //codeforce support multithreading code;
     //codechef support multithreading


#ifndef ONLINE_JUDGE
     auto end = std::chrono::high_resolution_clock::now();
     auto duration=std::chrono::duration_cast<std::chrono::microseconds>( end- start);
     cout<<"duration in second "<<duration.count()/1000000<<"\n";
#endif


     return 0;
}
