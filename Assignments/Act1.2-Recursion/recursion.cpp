#include <iostream>

using namespace std;

int sumIterative(int n){
    int suma=0;
    for (int i=1; i<=n;i++){
        suma+=i;
    }
    return suma;
}

int sumRecursive(int n){
    if (n == 0){
        return n;
    }
    return n+sumRecursive(n-1);
}

int sumFormula(int n){
    return n*(n+1)/2;
}

int fibIterative(int n){

    int f1=0;
    int f2=1;
    int temp;
    for(int i=0;i<n-1;i++){
        temp=f2;
        f2=f1+f2;
        f1=temp;
    }
    return f2;
}

int fibRecursive(int n){
    if (n<=1){
        return n;
    }
    return fibRecursive(n-1)+fibRecursive(n-2);
}

int bacteriasIterative(int n){
    int b;
    int sum=1;
    int dead;
    int live;
    for (int i = 0;i<n;i++){
        live=sum*3.78;
        dead=sum*2.34;
        sum=sum+live-dead;
    }
    return sum;
}

int bacteriasRecursive(int n){
    if (n==0){
        return 1;
    }
    int bacteria=bacteriasRecursive(n-1);
    int born=bacteria*3.78;
    int dead=bacteria*2.34;
    return bacteria+born-dead;
}

    float investIterative(int n, float x){

        for (int i=0;i<n;i++){
            x+=(x*0.1875);
            }
            return x;
    }

    float investRecursive(int n, float x){

        if(n<=0){
            return x;
        }
        return investRecursive(n-1,x)*1.1875;
    }

    int powIterative(int n,int y){
        int total=1;
        for(int i=0;i<y;i++){
            total=total*n;
        }
        return total;
    }
    int powRecursive(int n,int y){
        if(y==0){
            return 1;
        }
        return n*powRecursive(n,y-1);
    }

int main() {

    cout<<"La sumatoria iterativa de 3 es :"<<sumIterative(3)<<endl;
    cout<<"La sumatoria recursion de 3 es :"<<sumRecursive(3)<<endl;
    cout<<"La sumatoria formula de 3 es :"<<sumFormula(3)<<endl;
    cout<<"La fibonacci iterativa de 5 es :"<<fibIterative(5)<<endl;
    cout<<"La fibonacci recursion de 5 es :"<<fibRecursive(5)<<endl;
    cout<<"La bacteria iterativa de 5 es :"<<bacteriasIterative(100000)<<endl;
    cout<<"La bacteria recursion de 5 es :"<<bacteriasRecursive(100000)<<endl;
    cout<<"La invest iterativa de 5 es :"<<investIterative(1,10)<<endl;
    cout<<"La invest recursion de 5 es :"<<investRecursive(1,10)<<endl;
    cout<<"La pow iterativa de 5 es :"<<powIterative(2,0)<<endl;
    cout<<"La pow recursion de 5 es :"<<powRecursive(2,0)<<endl;
    

    return 0;
}