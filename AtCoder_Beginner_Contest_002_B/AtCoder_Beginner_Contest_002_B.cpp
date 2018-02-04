#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main(){
    std::string str;
    std::vector<char> v{'a','i','u','e','o'};
    std::cin>>str;

    for(int i=0;i<str.size();i++){
	while(str.find(v[i])!=std::string::npos){
	     str.erase(str.begin()+str.find(v[i]);
    }

    std::cout<<str<<std::endl;

    return 0;
}
