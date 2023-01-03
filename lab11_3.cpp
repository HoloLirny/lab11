#include <iostream>
#include<fstream>
#include <iomanip>
#include<cmath>

using namespace std;

int main(){
    int count=0;
    float sum=0,as=0;
    string t;
    ifstream source("score.txt");
    while(getline(source,t)){
        sum+=atof(t.c_str());
        as+=(atof(t.c_str())*atof(t.c_str()));
        count++;
    }
    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<sum/count<<endl;
    cout << "Standard deviation = "<<sqrt ((as/count)-((sum/count)*(sum/count)));
}