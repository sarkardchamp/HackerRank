#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box {
    private:
        long int l,b,h;
    public:    
        Box(){
            l=0;
            b=0;
            h=0;
        }
    
        Box(int len,int brd, int hgt){
            l=len;
            b=brd;
            h=hgt;
        }
        Box(Box &obj){
            l = obj.l;
            b = obj.b;
            h = obj.h;
        }
        
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long int CalculateVolume(){
            long long int vol;
            vol = l*b*h;
            return vol;
        }
        bool operator < (Box& B){
            if(l < B.l) return 1;
            else if((l==B.l) && (b<B.b)) return 1;
            else if((l==B.l) && (b==B.b) && (h<B.h)) return 1;
            else return 0;
        }
        friend ostream& operator << (ostream& out, Box& B){
            out<<B.l<<" "<<B.b<<" "<<B.h;
            return out;
        }
        
};

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}