 #include<iostream>
 
  using namespace std;
 
 int main(){
    
    int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
    int freq[100];
        int count;
        for(int i=0;i<n;i++){
            count =0;
            for(int j =0; j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    freq[i]= count;
                    }
                else 
                    continue;
            }
            
        }

        for(int i=0;i<n;i++)
            cout<<freq[i]<<" ";
       

}