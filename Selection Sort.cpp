#include<iostream>
using namespace std;
void selection_sort(int a[],int n);

int main(){
 int n,i;
int a[20];

 cout<<"Enter the number of element of your array:";
 cin>>n;
 cout<<"\n\n";

 cout<<"Enter the "<<n<<" elements:"<<endl;
 for (int i=0;i<n;i++)
 {
    cout<<"Enter the element for ["<<i<<"] position:";
    cin>>a[i];

 }
 cout<<"\n\n";

 selection_sort(a,n);

 return 0;
}
void selection_sort(int a[],int n)
{
    int s,i,min,min_index;
    for(s=0;s<n-1;s++){
        min=a[s];
        min_index=s;
        for(i=s+1;i<n;i++){
        if(min>a[i])
        {
            min=a[i];
            min_index=i;
        }
        }
        if(min_index!=s){
            a[min_index]=a[s];
            a[s]=min;
        }
    }

cout<<"The sorting array is:";
for(int z=0;z<n;z++)
cout<<" "<<a[z];
}
