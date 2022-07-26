#include <bits/stdc++.h>

int main() {
    int n;
    std::cin>>n;
    std::cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n/=2;
            std::cout<<n;
        }
        else{
            n=(n*3)+1;
            std::cout<<n;
        }
        std::cout<<" ";
    }

    return 0;
}
