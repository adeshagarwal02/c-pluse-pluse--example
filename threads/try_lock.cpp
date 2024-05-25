/*Mutex trylock()
 *Try_lock() tries to lock the mutex return immediately
 *On Successfull lock acquisition returns true otherfise returns false 
 *If try_lock() not able to lock miutex, then it doesn't get blocked that is why it is called non-blocking.*/

#include <iostream>
#include <mutex>
#include <thread>

int count {};
std::mutex m;

void increase_count(void){
	for(int i = 0; i < 100000; i++){
		if(m.try_lock()){
			count++;
			m.unlock();
		}
	}
}

int main(void){
	std::thread t1(increase_count);
	std::thread t2(increase_count);
	t1.join();
	t2.join();
	std::cout <<"Counter value:=" << count <<std::endl;
	return 0;
}
