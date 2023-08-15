#include <iostream>
#include <list>
#include <vector>
#include <set>

template <typename T>
void my_print(const T& cont){
	for (auto it: cont){
		std::cout << it << " ";
	}
	std::cout << std::endl;
}

void erase_smaller_than_n(std::list<int>& list, int n){
	std::list<int>::iterator it;
	for (it = list.begin(); it != list.end();){
		if (*it < n){
			it = list.erase(it);
		}
		else{
			it++;
		}
	}
}

void erase_smaller_than_n(std::vector<int>& vec, int n){
	std::vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end();){
		if (*it < n){
			it = vec.erase(it);
		}
		else{
			it++;
		}
	}
}

void erase_smaller_than_n(std::set<int>& s, int n){
	std::set<int>::iterator it;
	for (it = s.begin(); it != s.end();){
		if (*it < n){
			it = s.erase(it);
		}
		else{
			it++;
		}
	}
}

int main(){
	std::list<int> list;
	while (list.size() != 10){
		list.push_back(rand()%90+10);
	}

	std::cout << "List: " << std::endl;
	my_print(list);
	erase_smaller_than_n(list, 50);
	my_print(list);

	std::vector<int> vec;
	while (vec.size() != 10){
		vec.push_back(rand()%90+10);
	}

	std::cout << "\nVector: " << std::endl;
	my_print(vec);
	erase_smaller_than_n(vec, 50);
	my_print(vec);

	std::set<int> s;
	while (s.size() != 10){
		s.insert(rand()%90+10);
	}

	std::cout << "\nSet: " << std::endl;	
	my_print(s);
	erase_smaller_than_n(s,50);
	my_print(s);

	return 0;
}