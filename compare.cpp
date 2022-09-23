#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,temp=0,temp2=0;
    long long int sum1=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  for(int i=0;i<n;i++){
      sum1=sum1+arr[i];
  }
  temp=sum1;
  if(sum1 %2 !=0){
      cout<<"NO";
      return 0;
  }
    for(int i=0;i<n-1;i++){
          temp2=arr[i];
          for(int j=i+1;j<n;j++) {
              temp2 += arr[j];
              if (temp2 == temp / 2) {
                  cout << "YES";
                  return 0;
              }
          }
      }
    cout<<"NO";
    return 0;


}