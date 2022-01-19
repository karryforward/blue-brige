#include <iostream>
using namespace std;
int maxy(int x,int y){
    if (x>y){
        if (x%y==0)return y;
        return maxy(y,x%y);
    }
    else if (y>x){
        if (y%x==0)return x;
        return maxy(x,y%x);
    }
}
int main() {
    int m,n;
    cin>>m;
    cin>>n;
    cout<<maxy(m,n)<<endl;
    cout<<m*n/maxy(m,n);
}
