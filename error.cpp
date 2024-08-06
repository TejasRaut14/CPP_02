//find dupalicates- means one number is present double means repeat 
int finddupalicate(vector<int>&arr){
    int ans==0;
    //XORing all array elements
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    //xor[1,n-1]
    for(int i=1;i<arr.size();i++){
        ans=ans^i;
    }
    return ans;
}