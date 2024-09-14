#include <iostream>
using namespace std;

int main(){
int arr1[5] = {1,3,5,7,9};
int s1=5;
int arr2[7]={2,4,8,10,11,12,16};
int s2=7;

int res[12];
int i=0, j=0, k=0;
while (i<s1 && j<s2){
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
  cout << "Merged array: ";
  for (int x = 0; x < s1 + s2; x++) {
      cout << res[x] << " ";
  }
  cout << endl;

  return 0;
  
return 0;
}


