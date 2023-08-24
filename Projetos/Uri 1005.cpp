    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        double a,b,media=0;
        cin>>a>>b;
        a=a*3.5;
        b=b*7.5;
        media= (a+b)/(3.5+7.5);
        cout<<fixed;
        cout<<setprecision(5)<<"MEDIA = "<<media<<endl;
        return 0;
    }   