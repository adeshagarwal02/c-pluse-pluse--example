#include <iostream>
#include <thread>
#include <mutex>

int count {};

std::timed_mutex m;

void increment(int i){
	auto now = std::chrono::steady_clock::now();
	if(m.try_lock_until(now+std::chrono::seconds(1))){
		++count;
		std::this_thread::sleep_for(std::chrono::seconds(2));
		std::cout<<"Thread :" << i <<" entered"<<std::endl;
		m.unlock();
	}
	else
		std::cout<<"Thread :" << i <<" couldn't entered"<<std::endl;

}


int main(void){
	std::thread t1(increment,1);
	std::thread t2(increment,2);
	t1.join();
	t2.join();
	std::cout<<"counter : "<<count<<std::endl;
	return 0;
}
