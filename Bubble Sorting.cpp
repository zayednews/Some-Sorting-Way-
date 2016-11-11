#include<iostream>
using namespace std;
int list[20];
void bubble_sort(int n);

int main(){
 int n,i;

 cout<<"Enter the number of element of your array:";
 cin>>n;
 cout<<"\n\n";

 cout<<"Enter the "<<n<<" elements:"<<endl;
 for (int i=0;i<n;i++)
 {
    cout<<"Enter the element for ["<<i<<"] position:";
    cin>>list[i];

 }
 cout<<"\n\n";

 bubble_sort(n);

 return 0;
}
void bubble_sort(int n)
{
    int f,i;
    for (int pass=0;pass<n;pass++){
        f=0;
        for(i=0;i<(n-1);i++){
    if(list[i]>list[i+1]){
        swap(list[i],list[i+1]);
        f=1;
    }
    }
    if(f==0)
    break;
}
cout<<"The sorting array is:";
for(int zn=0;zn<n;zn++)
cout<<" "<<list[zn];
}
