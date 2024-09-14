#include <iostream>
using namespace std;

int main(){
int arr1[5] = {1,3,5,7,9};
int s1=5;
int arr2[7]={2,4,8,10,11,12,16};
int s2=7;

int res[12];
int i, j, k;
while(int i<s1 && int j<s2){
  if(arr1[i]<arr2[j]){
    res[k]=arr1[i];
    i++;
    k++;
  }

    
  else{
    res[k]=arr2[j];
    j++;
    k++;
  }
}

while(i<s1){
  res[k++]=arr1[i++];
}

  
while(j<s2){
  res[k++]=arr2[j++];
}
  
  
return 0;
}


