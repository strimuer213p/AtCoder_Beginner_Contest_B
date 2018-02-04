#include<iostream>

int main(){
    int m,v;
    std::cin>>m;

    if(m<100){
       v=0;
    }else if(m>=100&&m<=5000){
       v=m/100;
    }else if(m>=6000&&m<=30000){
       v=m/1000+50;
    }else if(m>=35000&&m<=70000){
       v=(m/1000-30)/5+80;
    }else if(m>70000){
       v=89;
    }

    if(v<10){
       int a=0;
       std::cout<<a<<v<<std::endl;
    }else{
       std::cout<<v<<std::endl;
    }

    return 0;
}
