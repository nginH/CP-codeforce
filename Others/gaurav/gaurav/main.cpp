//
//  main.cpp
//  gaurav
//
//  Created by Harsh Anand on 28/09/2023.
//

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace chrono;

void gaurav(int x){
     std::this_thread::sleep_for(chrono::seconds(2));// 2 pause
     cout<<x<<"\n";
}

void harsh(int x){
     std::this_thread::sleep_for(chrono::seconds(2));  // 2 second pause
     cout<<x<<"\n";
}

int main(void){
     auto start = high_resolution_clock::now();

     std::thread t1(gaurav, 5); // main fxn
     std::thread t2(harsh, 5); //

     t1.join();
     t2.join();

     auto end= high_resolution_clock::now();
     auto duration= duration_cast<microseconds>(end-start);
     cout<<" time taken to excute "<<duration.count()/1000000<<"\n";



}
