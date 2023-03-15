#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt = 0;
    int sum = 0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" "<<n/i<<endl;
            cnt+=1;
            sum += i;
            if(n/i!=i){
                cnt += 1;
                sum += n/i;
            }
        }
    }
    cout<<"Total divisors of "<<n<<": "<<cnt<<endl;
    cout<<"Total Sum of "<<n<<": "<<sum<<endl;
    return 0;
}